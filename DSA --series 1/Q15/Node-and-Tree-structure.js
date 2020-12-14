// Node of tree
class Node{
    constructor(data){
        this.data=data
        this.children=[]
    }

    add(data){
        this.children.push(new Node(data))
    }
    remove(data){
        this.children=this.children.filter(elem => elem.data!==data)
    }
}

// Tree
class Tree{
    constructor(){
        this.root=null
    }
    // Tree traversal methods

    bfs(){   // Level order traversal 
        const bfsQueue=[this.root] //queue will hold tree elements
        while(bfsQueue.length){
            let cur=bfsQueue.shift()
            bfsQueue.push(...cur.children) //push nodes in cur.children
            console.log(cur.data)
        }
    }
    dfs(){
        const dfsStack=[this.root] //stack will hold tree elements
        while(dfsStack.length){
            let cur=dfsStack.shift()
            dfsStack.unshift(...cur.children)
            console.log(cur.data)
        }
    }
}

const tree=new Tree() //myfamily

// GrandParent Generation--1
const grandpa=tree.root=new Node(1)

// Parents Generation--2
const dad=new Node(2)
grandpa.children.push(dad)

const uncle=new Node(3)
grandpa.children.push(uncle)

// Grandchilds  Generation--3
const me =new Node(4)
dad.children.push(me)

const mySis =new Node(5)
dad.children.push(mySis)

const cousinBro =new Node(6)
dad.children.push(cousinBro)

const cousinSis =new Node(7)
dad.children.push(cousinSis)

console.log('BFS traversal ')
tree.bfs()

console.log('DFS traversal ')
tree.dfs()

module.exports={Node,Tree}

