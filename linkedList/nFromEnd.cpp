#include <iostream>
#include <vector>
#include <map>  
#include <utility> 
using namespace std; 
 


struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; 
 
    int getNthFromLast(Node *head, int n)
    {
           int ct=0;
           Node* temp=head;
           while (temp!=NULL){
            ct+=1;
            temp=temp->next;
           }
           if(n>ct){
            return -1;
           }
           temp=head;
           for(int i=0;i<ct-n;i++){
            temp=temp->next;
           }
           return temp->data;
    }