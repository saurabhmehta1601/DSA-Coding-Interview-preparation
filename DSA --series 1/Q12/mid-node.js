/*
    function getMid gives mid node for odd length and 
    last node of first half for even length of linked list
*/



const f=require('../Q11/Node-and-LinkedList-structure')

l1=new f.LinkedList()

class newList extends f.LinkedList{
    constructor(){
        super()
    }
    getMid(){
        let slowItr=this.head
        let fastItr=this.head

        while(fastItr.next && fastItr.next.next){
            slowItr=slowItr.next
            fastItr=fastItr.next.next
        }return slowItr
    }
}

l1=new newList()

l1.push_back(1)
l1.push_back(2)
l1.push_back(3)
l1.push_back(4)


console.log(l1.getMid())