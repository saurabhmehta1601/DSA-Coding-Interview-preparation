const fs=require('./Node-and-LinkedList-structure')

const log=console.log

class List extends fs.LinkedList{
    constructor(){
        super()
    }
    *traverse(){ //traverse list using generators return nodes
       let cur=this.head
       while(cur){
           yield cur
           cur=cur.next
       }
    }
}

// create linked list instance 
l1=new List()

// insert some data

l1.push_front(1)
l1.push_front(2)
l1.push_front(3)
l1.push_front(4)
l1.push_front(5)

// insert data in myList variable

let myList=l1.traverse()

// changing data in each node
for(let n of myList){
    n.data+=10
}

log(l1.getAt(0))
