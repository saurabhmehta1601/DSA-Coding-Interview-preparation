class Tree {
  constructor(value = null, children = []) {
        this.value = value;
        this.children = children;
  }
  *print(){
      yield this.value
      for (let child of this.children){
          yield* child.print()
      }       
  }
}

const tree=new Tree(1,[new Tree(2,new Tree(4)),new Tree(3)])

const childs=tree.print()

for(let item of childs){
    console.log(item)
}