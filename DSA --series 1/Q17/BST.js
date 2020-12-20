// Binary Search Tree with insert and contains function

const log = console.log;

class Node {
  constructor(data) {
    this.data = data;
    this.left = null;
    this.right = null;
  }

  insert(data) {
    //inserting node in BST

    if (this.data > data && this.left) {
      this.left.insert(data);
    } else if (this.data > data) {
      this.left = new Node(data);
    } else if (this.data < data && this.right) {
      this.right.insert(data);
    } else {
      this.right = new Node(data);
    }
  }
  contains(data) {
    //Similar to this function we can return node if present else null
    if (this.data === data) {
      return this;
    }
    if (this.data < data && this.right) {
      return this.right.contains(data);
    } else if (this.data > data && this.left) {
      return this.left.contains(data);
    } else {
      return null;
    }
  }
}

class Tree {
  constructor() {
    this.root = null;
  }
}

module.exports = { Tree };
