// Implementing a queque using two stacks

class QueueFromStacks {
  constructor() {
    this.stack1 = [];
    this.stack2 = [];
  }

  enqueue(data) {
    this.stack1.push(data);
  }
  dequeue() {
    if (this.stack1.length == 0) {
      console.log("Empty queue nothing to dequeue");
    } else {
      while (this.stack1.length != 0) {
        let top = this.stack1[this.stack1.length - 1];
        this.stack2.push(top);
        this.stack1.pop();
      }
      this.stack2.pop();

      while (this.stack2.length != 0) {
        let top = this.stack2[this.stack2.length - 1];
        this.stack1.push(top);
        this.stack2.pop();
      }
    }
  }
  back() {
    return (this.back = this.stack1[this.stack1.length - 1]);
  }
  front() {
    while (this.stack1.length != 0) {
      let top = this.stack1[this.stack1.length - 1];
      this.stack2.push(top);
      this.stack1.pop();
    }
    let front = this.stack2[this.stack2.length - 1];

    while (this.stack2.length != 0) {
      let top = this.stack2[this.stack2.length - 1];
      this.stack1.push(top);
      this.stack2.pop();
    }

    return front;
  }
}


