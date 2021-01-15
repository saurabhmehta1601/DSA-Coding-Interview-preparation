#include "bits/stdc++.h"
using namespace std;

class  Node{
public:
    int data;
    Node* next=NULL;
    Node(int data){
        this->data=data;
    }
};

#include "functions.h"




int main()
{
  Node* l1=NULL;
  fillList(l1,5);
  printList(l1);

    return 0;
}
