// Structure of node

class Node {
  constructor(data, next = null) {
    this.data = data;
    this.next = next;
  }
}

// structure of LinkedList
// contains functions push_front,push_back,

class LinkedList {
  constructor() {
    this.head = null;
  }

  push_front(data) {
    let newnode = new Node(data);
    if (!this.head)
      //same as if(this.head==null)
      this.head = newnode;
    else {
      newnode.next = this.head;
      this.head = newnode;
    }
  }
  push_back(data) {
    let newnode = new Node(data);

    let cur = this.head;
    if (!this.head) {
      this.head = newnode;
    } else {
      while (cur.next) {
        cur = cur.next;
      }
      cur.next = new Node(data);
    }
  }
  print() {
    //prints linked list
    let current_node = this.head;
    while (current_node) {
      console.log(current_node.data);
      current_node = current_node.next;
    }
  }
  size() {
    let curr = this.head;
    let length = 0;
    while (curr) {
      //or while(curr!=null) same as while(curr)
      length++;
      curr = curr.next;
    }
    return length;
  }
  getFirst() {
    // gives first node if list empty return null
    return this.head;
  }
  getLast() {
    //gives last node if list empty return null
    let curr = this.head;
    if (this.head == null) {
      return null;
    }
    while (curr.next) {
      curr = curr.next;
    }
    return curr;
  }
  removeFirst() {
    if (!this.head) {
      console.log("Empty list nothing to remove");
    } else {
      this.head = this.head.next;
    }
  }
  removeLast() {
    let curr = this.head;
    if (!this.head) {
      console.log("Empty list nothing to remove");
    } else if (!this.head.next) {
      this.head = null;
    } else {
      let curr = this.head;
      while (curr.next.next) {
        curr = curr.next;
      }
      curr.next = null;
    }
  }
  getAt(position) {
    // index starts from 0 method gives node at specified postition
    let current = 0;
    if (position + 1 > this.size()) {
      console.log("Index out of bounds");
    } else {
      let curr = this.head;
      while (current != position) {
        curr = curr.next;
        current++;
      }
      return curr;
    }
  }
  removeAt(position) {
    let current = 0;
    if (position + 1 > this.size()) {
      console.log("Index out of bounds");
    } else {
      if (position == 0) {
        this.head = this.head.next;
      } else {
        let nodeBefore = this.getAt(position - 1);
        nodeBefore.next = nodeBefore.next.next;
      }
    }
  }
  insertAt(position, data) {
    let newnode = new Node(data);
    if (position == 0) {
      newnode.next = this.head;
      this.head = newnode;
      return;
    }
    let curr = this.getAt(position - 1);

    newnode.next = curr.next;
    curr.next = newnode;
  }
  clear() {
    //clears linked list or empties the list
    this.head = null;
  }
}

module.exports = { Node, LinkedList };
