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

void insertAtTail(Node* &head, int val){
    Node* n=new Node(val);
    if(head==NULL){
        head=n;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
 void printData(Node* &head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<", ";
        temp=temp->next;
    }
    cout<<endl;
    return;
 }
 void reversal(Node* &head){
    Node* n=head;
    Node *temp1=NULL;
    Node *temp2=n->next;
    while(temp2!=NULL){
        n->next=temp1;
        temp1=n;
        n=temp2;
        temp2=n->next;
    }
    n->next=temp1;
    head=n;
 }

 bool detect(Node* &head){
       if(head==NULL || head->next==NULL)
       {
           return false;
       }
       Node* slow=head;
       Node* fast=head;
       while(fast!=NULL && fast->next!=NULL)
       {
           slow=slow->next;
           fast=fast->next->next;
           if(slow==fast) return true;
       }
       return false;
 }

 int main(){
    Node * head=NULL;
    insertAtTail(head,435);
    insertAtTail(head,45);
    insertAtTail(head,7);
    printData(head);
    reversal(head);
    printData(head);

 }