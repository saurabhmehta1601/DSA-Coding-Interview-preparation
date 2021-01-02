// O(n) recursive solution

#include <bits/stdc++.h>
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
    bool isSameTree(Node* root1,Node* root2){
        if(root1==root2==NULL)return true; //if both corresponding nodes null return null
        if(root1==NULL || root2==NULL ) return false; //if one of corresponding node null return false 

        return root1->data==root2->data && isSameTree(root1->left,root2->left) && isSameTree(root1->right,root2->right) ; //if both corresponding nodes not null then their data value and their left and right corresponding subtree should be equal.
    }   
};


int main(int argc, char const *argv[])
{
   
    return 0;
}
