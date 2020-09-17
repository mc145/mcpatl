#include<iostream>
#include<algorithm>
#include<stack> 
#include<queue> 
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

int main(){
    insert(1); 
    insert(4);
    insert(5); 
    insert(6); 

display(); 
reverseList(); 
cout << '\n'; 
display(); 
}
