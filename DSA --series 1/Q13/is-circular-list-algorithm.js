f= require('../Q11/Node-and-LinkedList-structure')

/*
 * traverse the linked list while (fastPtr.next and fastPtr.next.next) is 
    not null and assign 
    fastPtr=fastPtr.next.next and 
    slowPtr=slowPtr.next

    if at any iteration 
    slowPtr===fastPtr 
    then they point same memory address thus list is circular
 */

 