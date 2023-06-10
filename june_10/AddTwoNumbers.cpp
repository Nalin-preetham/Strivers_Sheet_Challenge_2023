/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

void insert(Node* &head,Node* &tail,int val)
{
    Node* temp=new Node(val);
    if(head==NULL)
    {
    
       tail=head=temp;
        return;
    }

    tail->next=temp;
    tail=temp;
}
Node *addTwoNumbers(Node *num1, Node *num2)
{
  
    Node* head=NULL;
    Node* tail=NULL;
    int c=0;
    int sum;
       while(num1 && num2)
       {
         sum=num1->data+num2->data+c;
         insert(head,tail,sum%10);
         c=sum/10;
         num1=num1->next;
         num2=num2->next;
       }
       while(num1)
       {
           sum=num1->data+c;
            insert(head,tail,sum%10);
            c=sum/10;
            num1=num1->next;
       }
       while(num2)
       {
           sum=num2->data+c;
           insert(head,tail,sum%10);
            c=sum/10;
            num2=num2->next;
       }
       if(c)
       {
          insert(head,tail,c); 
       }
       return head;

}
