const f=require('../Q11/Node-and-LinkedList-structure')



// Assumption made n is less than list size
function nodeFromEnd(list,n){

    let ptr1=list.head
    let ptr2=list.head

    while(n>=0){
        ptr1=ptr1.next
        n--
    }

    while(ptr1){
        ptr1=ptr1.next
        ptr2=ptr2.next
    }
 return ptr2   
}

const l1=new f.LinkedList()

l1.push_back(1)
l1.push_back(2)
l1.push_back(3)
l1.push_back(4)
l1.push_back(5)

console.log(nodeFromEnd(l1,0))