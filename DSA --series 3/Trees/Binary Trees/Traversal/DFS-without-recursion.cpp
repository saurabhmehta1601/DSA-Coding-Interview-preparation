
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

class Solution{
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
    void inorder(Node* root) {

        if (root==NULL) return;
        Node* cur = root;
        stack<Node*> s;
        cout<<"Inorder traversal is : ";
        while (!s.empty() || cur)
        {
            while(cur){
                s.push(cur);
                cur=cur->left;
            }
            cur=s.top();
            s.pop();
            cout<<cur->data<<" ";

            cur=cur->right;
        }
        

       

    }
   

       
};




int main(int argc, char const *argv[])
{
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;
    cout<<"Enter no of nodes \n";
    cin >> t;

    while(t--) {
        
        cin >> data;
        root = myTree.insert(root, data);
    }

    myTree.inorder(root);
    return 0;
}
