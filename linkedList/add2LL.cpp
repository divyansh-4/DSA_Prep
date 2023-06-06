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

    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        Node* temp=first;
        Node* prev=NULL;
        Node* next=first->next;
        while(temp->next!=NULL){
            temp->next=prev;
            prev=temp;
            temp=next;
            next=next->next;
        }
        temp->next=prev;
        first=temp;
        Node* temp2=second;
        Node* prev2=NULL;
        Node* next2=second->next;
        while(temp2->next!=NULL){
            temp2->next=prev2;
            prev2=temp2;
            temp2=next2;
            next2=next2->next;
        }
        temp2->next=prev2;
        second=temp2;

        struct Node* head;
        int carry=0;
        int a=temp->data+temp2->data;
        if(a>10){
           carry=a/10;
            a=a%10;
        }
        Node* ne=new Node(a);
        head=ne;
        temp=temp->next;
        temp2=temp2->next;
        while(temp->next!=NULL && temp2->next!=NULL){
            a=temp->data+temp2->data+carry;
            carry=a/10;
            if(a>10){
                a=a%10;
            }
            Node* ne2=new Node(a);
            ne->next=ne2;
            ne=ne->next; 
            temp=temp->next;
            temp2=temp2->next;          
        }
        if(temp->next==NULL && temp2->next!=NULL){
            a=temp->data+temp2->data+carry;
            carry=a/10;
            if(a>10){
                a=a%10;
            }
            Node* ne2=new Node(a);
            ne->next=ne2;
            ne=ne->next;
            temp2=temp2->next;
            while(temp2->next!=NULL){
                a=temp2->data+carry;
                carry=a/10;
                if(a>10){
                    a=a%10;
                }
                Node* ne2=new Node(a);
                ne->next=ne2;
                ne=ne->next;
                temp2=temp->next;                
            }
        }
        if(temp->next!=NULL && temp2->next==NULL)


    }