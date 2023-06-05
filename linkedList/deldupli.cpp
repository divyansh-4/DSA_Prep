#include <iostream>
#include <vector>
#include <map>  
#include <utility> 
using namespace std;


class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};


Node *removeDuplicates(Node *head)
{
    if(head->next!=NULL){
    Node* slow=head;
    Node* fast=head->next;
    while(fast->next!=NULL){
        if(fast->data==slow->data){
            fast=fast->next;
        }
        else{
            slow->next=fast;
            slow=fast;
            fast=fast->next;
            if(fast->next==NULL){
                slow->next=fast;
            }
        }
    }
    if(fast->data==slow->data){
        slow->next==NULL;
    }
    }
    return head;
}