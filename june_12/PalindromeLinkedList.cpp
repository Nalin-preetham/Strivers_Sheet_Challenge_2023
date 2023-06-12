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

bool isPalindrome(LinkedListNode<int> *head) {
    if(head==NULL)
    return true;
    LinkedListNode<int> * slow=head;
    LinkedListNode<int> *fast=head;
    LinkedListNode<int> *prev=NULL;
    int cnt=0;
    while(fast!=NULL && fast->next!=NULL)
    {
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
        cnt++;
    }
    while(slow!=NULL)
    {
        LinkedListNode<int> *next=slow->next;
        slow->next=prev;
        prev=slow;
        slow=next;
    }
    while(prev!=head && cnt)
    {
       cnt--;
        if(prev->data!=head->data)
        return false;
        prev=prev->next;
        head=head->next;
    }
    return true;


}
