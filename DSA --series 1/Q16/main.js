const log=console.log

const n=require('./Node')
const Node=n.Node

class Tree{
    constructor(){
        this.root=null
    }
}

const tree=new Tree()

tree.root=new Node(1)

tree.root.children=[new Node(2),new Node(3),new Node(4)]

tree.root.children[0].children=[new Node(6)] //by definition children is a list

tree.root.children[2].children=[new Node(7)]

function getWidths(root)
{
   const que=[root,'s']
   const widths=[]
    width=0
   while( que.length > 1 ){
                const node=que.shift()
                if(node==='s'){

                    widths.push(width)
                    width=0
                    que.push('s')
                }else{
                    que.push(...node.children)
                    width++
                }
           }
           widths.push(width)
           
           return widths
  
}


console.log(getWidths(tree.root))