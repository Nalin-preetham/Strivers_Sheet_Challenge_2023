#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    if(head==NULL)
    return head;
    LinkedListNode<int>* prev=NULL;
    LinkedListNode<int> * curr=head;
    while(curr!=NULL)
    {
        LinkedListNode<int> *next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        
    }
    return prev;


}
