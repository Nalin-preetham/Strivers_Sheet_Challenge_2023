/****************************************************************

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

*****************************************************************/
#include<unordered_map>
Node* findIntersection(Node *firstHead, Node *secondHead)
{
    unordered_map<Node*,int> mp;
    while(firstHead || secondHead)
    {
        if(firstHead)
        {
        if(mp.find(firstHead)!=mp.end())
        {
            return firstHead;
        }
        else{

            mp[firstHead]++;
            firstHead=firstHead->next;
        }
        }
        if(secondHead)
        {
         if(mp.find(secondHead)!=mp.end())
        {
            return secondHead;
        }
        else{

            mp[secondHead]++;
            secondHead=secondHead->next;
        }

        }
    }
    return NULL;
}
