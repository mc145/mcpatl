#include<iostream>
#include<algorithm>
#include<stack> 
#include<queue> 
#include<stdio.h> 
#include<stdlib.h> 
#include<vector>

using namespace std; 


struct Node{
    int data; 
    struct Node *next; 
};

struct Node* head = NULL; 


void insert(int new_data){
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
    
    new_node->data = new_data; 
    new_node->next = head; 
    head = new_node; 
}

void remove(int pos){
  Node *temp1 = head; 

  if(pos == 1){
      head = temp1->next; 
      free(temp1); 
      
  }
  else{
      for(int i = 0; i<pos-2; i++){
          temp1 = temp1->next; 
      }
      Node *temp2 = temp1->next; 
      temp1->next = temp2->next; 

      free(temp2); 
  }



}

void display(){
    struct Node* ptr; 
    ptr = head; 
    while(ptr != NULL){
        cout << ptr->data << " " ; 
        ptr = ptr->next; 
    }
}

void reverseList(){ 
    Node *p, *c, *n; 

    c = head; 
    p = NULL; 

    while(c != NULL){
        n = c->next; 
        c->next = p; 
        p = c; 
        c = n;
    }
   head = p; 
}

Node* traverse(int n){
    Node *ans = head; 

    for(int i = 0; i<n-1; i++){
        ans = ans->next; 
    }
    return ans; 
}
int main(){

}
