
// Three methods-- inorder,preorder,postorder 
// This is  Recursive solution which is very simple. 

#include <bits/stdc++.h>	

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }

    void inorder(Node* root){  // Traversal Method - 1
    if (root==NULL) return;

    cout << root->data << endl;
    inorder(root->left);
    inorder(root->right);   
}

void preorder(Node* root){ // Traversal Method - 2
    if (root==NULL) return;

    preorder(root->left);
    cout << root->data << endl;
    preorder(root->right);   
}

void postorder(Node* root){ // Traversal Method - 3
    if (root==NULL) return;

    postorder(root->left);
    postorder(root->right);   
    cout << root->data << endl;
}
 
}; //End of Solution

int main() {
  
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    cin >> t;

    while(t-- > 0) {
        cin >> data;
        root = myTree.insert(root, data);
    }
  

    return 0;
}


