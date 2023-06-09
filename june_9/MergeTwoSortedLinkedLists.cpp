#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/
void insert(Node<int>* &head,Node<int>* &tail,int val)
{
    Node<int>* temp=new Node<int>(val);
    if(head==NULL)
    {
        head=tail=temp;
     return;
    }
    tail->next=temp;
    tail=temp; 
}
Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    Node<int>* head=NULL;
    Node<int>* tail=NULL;
    while(first!=NULL && second!=NULL)
    {
        if(first->data<=second->data)
        {
            insert(head,tail,first->data);
            first=first->next;
        }
        else
        {
            insert(head,tail,second->data);
            second=second->next;
        }
    }

    while(first!=NULL)
    {
        insert(head,tail,first->data);
            first=first->next;

    }
    while(second!=NULL)
    {
        insert(head,tail,second->data);
            second=second->next;

    }
    return head;
}
