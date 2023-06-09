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




Node* findIntersection(Node* head1, Node* head2)
{
    map<int, int> mapa;
    Node* temp1=head1;
    Node* temp2=head2;
    while(temp1!=NULL){
        mapa[temp1->data]++;
        temp1=temp1->next;
    }
    Node* head3=NULL;
    Node* temp=NULL;
    while(temp2!=NULL){
        if(mapa[temp2->data]>=1){
            mapa[temp2->data]-=1;
            Node* nod=new Node(temp2->data);
            if(head3==NULL){
                head3=nod;
                temp=nod;
            }
            else{
            temp->next=nod;
            temp=temp->next;
        
            }
        }
        temp2=temp2->next;
    }
    return head3;
    
}