// O(n) 

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};


class Solution{
    public:
        int getHeight(Node* root){
            if(root==NULL) return 0; //leaf nodes have height zero 

            return 1+max(getHeight(root->left),getHeight(root->right));
        }
};



int main(int argc, char const *argv[])
{
    
    return 0;
}
