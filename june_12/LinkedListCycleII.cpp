/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *rotate(Node *head, int k) {
     Node* curr=head;
     int cnt=1;
     while(curr->next!=NULL)
     {
          curr=curr->next;
          cnt++;
     }
     k=k%cnt;
     curr->next=head;
     while(cnt-k)
     {
          cnt--;
          curr=curr->next;
     }
     Node* next=curr->next;
     curr->next=NULL;
     return next;
}
