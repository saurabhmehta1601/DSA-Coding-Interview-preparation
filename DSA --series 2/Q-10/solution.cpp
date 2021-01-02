// O(n) recursive solution
// traverse tree and swap left and right children for nodes

#include "bits/stdc++.h"
using namespace std;

struct Node
{
    int data;
    Node* left=NULL;
    Node* right=NULL;

    Node(int value){
       data=value;
    }
};



class Solution{
    public:
    Node* reversedTree(Node* root){
         if(root==NULL) return NULL;
         
         Node* temp=root->left;
         root->left=root->right;
         root->right=temp;

         reversedTree(root->left);
         reversedTree(root->right);

         return root;
     }

};

void printTree(Node* root){    //inorder traversal
    if (root==NULL ) return ;

    cout<<root->data<<" ";
    printTree(root->left);
    printTree(root->right);

}





int main(int argc, const char** argv) {

Solution s;
Node* root=new Node(1);
                                    //For better picture can draw tree on paper
root->left=new Node(2);
root->right=new Node(3);


root->left->left=new Node(4);
root->left->right=new Node(5);
root->right->left=new Node(6);
root->right->right=new Node(7);


cout<<"Before reversing :\n";
printTree(root);

Node* reversed_tree=s.reversedTree(root);


cout<<"\nAfter reversing :\n";
printTree(root);

    return 0;
}



