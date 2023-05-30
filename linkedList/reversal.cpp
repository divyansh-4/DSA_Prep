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

 int main(){
    node * head=NULL;
    insertAtTail(head,435);
    insertAtTail(head,45);
    insertAtTail(head,7);
    printData(head);
    reversal(head);
    printData(head);

 }