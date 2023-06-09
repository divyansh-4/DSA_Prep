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

    int length(Node* head){
        int ct=0;
        Node* temp=head;
        while(temp!=NULL){
            ct++;
            temp=temp->next;
        }
        return ct;
    }

        int intersectPoint(Node* head1, Node* head2)
        {
            int l1=length(head1);
            int l2=length(head2);
            Node* temp1=head1;
            Node* temp2=head2;
            int sk;
            if(l1>l2){
                sk=l1-l2;
                for (int i = 0; i < sk; i++){
                    temp1=temp1->next;            
                }
            }
            else{
                sk=l2-l1;
                for (int i = 0; i < sk; i++){
                    temp2=temp2->next;            
                }
            }

            
            while(temp1!=NULL && temp2!=NULL){
                if(temp1->data!=temp2->data){
                    temp1=temp1->next;
                    temp2=temp2->next;
                }
                else{
                    return temp1->data;
                }
            }
            return -1;
        }