class Events {
  constructor() {
    this.events = {};
  }
  on(event, callback) {
    if (this.events.event) {
      this.events[event].push(callback);
    } else {
      this.events[event] = [callback];
    }
  }
  trigger(event) {
    for (let cb in this.events[event]) {
      cb();
    }
  }

  remove(event) {
    delete this.events[event];
  }
}


