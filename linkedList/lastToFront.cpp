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

void func(Node* head){
    Node* temp=head;
    Node* prev;
    while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
    }
    Node* hn=head;
    head=temp;
    temp->next=hn;
    prev->next=NULL;
}