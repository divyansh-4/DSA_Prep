#include <iostream>
#include <vector>
#include <map>  
#include <utility> 
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};

void insertAtTail(node* &head, int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
 void printData(node* &head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<", ";
        temp=temp->next;
    }
    cout<<endl;
    return;
 }
 void reversal(node* &head){
    node* n=head;
    node *temp1=NULL;
    node *temp2=n->next;
    while(temp2!=NULL){
        n->next=temp1;
        temp1=n;
        n=temp2;
        temp2=n->next;
    }
    n->next=temp1;
    head=n;
 }

node* reverseK(node* head,int k){
    node* n=head;
    node *temp1=NULL;
    node *temp2;
    int j=0;
    while(n!=NULL && j<k){
        temp2=n->next;
        n->next=temp1;
        temp1=n;
        n=temp2;
        
        j++;
    }
    if(temp2!=NULL){
        head->next=reverseK(temp2,k);
    }
    return temp1;

 }

 int main(){
    node * head=NULL;
    insertAtTail(head,435);
    insertAtTail(head,45);
    insertAtTail(head,7);
    insertAtTail(head,45);
    insertAtTail(head,23);
    insertAtTail(head,3);
    insertAtTail(head,12);
    insertAtTail(head,76);
    insertAtTail(head,19);
    insertAtTail(head,41);
    insertAtTail(head,75);
    printData(head);
    reversal(head);
    printData(head);
    head=reverseK(head,4);
    printData(head);

 }