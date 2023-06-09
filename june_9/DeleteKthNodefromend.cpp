/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* removeKthNode(Node* head, int k)
{
    if(head==NULL)
    return head;
    
    Node* prev=NULL;
    Node* slow=head;
    Node* fast=head;
    for(int i=0;i<k;i++)
    {
        if(fast==NULL)
        return head;
        fast=fast->next;
    }
    while(fast!=NULL)
    {
        prev=slow;
        fast=fast->next;
        slow=slow->next;
    }
    if(prev==NULL)
    {
       Node* temp=head->next;
        delete head;
        return temp;
    }
    prev->next = slow->next;
    delete slow;
    return head;
}
