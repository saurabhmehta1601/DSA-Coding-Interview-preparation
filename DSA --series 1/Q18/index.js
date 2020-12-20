// Validate returns boolean telling whether given tree is BST or not .

const Tree = require("../Q17/BST").Tree;
const Node = require("../Q17/BST-Node").Node;

tree = new Tree();

tree.root = new Node(6);

tree.root.left = new Node(2);

tree.root.right = new Node(9);

tree.root.right.right = new Node(19);

tree.root.right.left = new Node(10);

function validate(node, min = null, max = null) {
  if (max !== null && node.data > max) {
    return false;
  }
  if (min !== null && node.data < min) {
    return false;
  }

  if (node.left && !validate(node.left, min, node.data)) {
    //left subtree have max value lesser than parent node value
    return false;
  }
  if (node.right && !validate(node.right, node.data, max)) {
    //right subtree have min values greater than parent node values
    return false;
  }

  return true;
}

console.log(validate(tree.root));
