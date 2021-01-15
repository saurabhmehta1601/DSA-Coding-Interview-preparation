Node* reverse(Node* head){
    Node* p;
    Node* q;
    Node* temp;

    q=head;
    p=q->next;
    temp=head;
   while(temp!=NULL){
       temp=p->next;
        p->next=q;
        q=p;
        p=temp;
   }
   head=q;

    return head;
}

void printList(Node* head){
    Node* cur=head;
    while(cur){
        cout<<cur->data;
        cur=cur->next;
    }
}


void fillList(Node *head,int n){
    int x;
while (n--)
{
    cin>>x;
    if(head==NULL) head=new Node(x);
    else
    {
        Node* p=head;
        while(p->next!=NULL){
            p=p->next;
        }
        p->next=new Node(x);
    }
    
}
}