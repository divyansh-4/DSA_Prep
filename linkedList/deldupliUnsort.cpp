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

// Node* func(Node* head, map<int, int> freq){

// }

Node* removeDuplicates(Node* head){
    if(head->next==NULL){
        return head;
    }
    map<int, int> freq;
    Node* temp=head;
    while(temp!=NULL){
        freq[temp->data]++;
        temp=temp->next;
    }
    if(freq[head->data]>=1){
        freq[head->data]=0;
    }
    temp=head->next;
    Node* temp2=head;

    Node* temp3=temp->next;
    while(temp3!=NULL){
        temp3=temp->next;
        if(freq[temp->data]>=1){
            temp2->next=temp;
            temp2=temp2->next;
            freq[temp->data]=0;    map<int, int> freq;
    Node* temp=head;
        }
        temp=temp3;
    }
    temp2->next=temp3;
    return head;
    // return func(head,freq);

}

int main(){
    Node* head=NULL;
    insertAtTail(head,5);
    // insertAtTail(head,2);
    // insertAtTail(head,2);
    // insertAtTail(head,4);
    // insertAtTail(head,4);
    // insertAtTail(head,2);

    printData(head);
    head=removeDuplicates(head);
    printData(head);
}