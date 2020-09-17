#include<iostream>

using namespace std; 


struct Node{
    int data; 
    struct Node *next; 
};
struct Node *head = NULL; 

void insert(int new_data){
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
    
    new_node->data = new_data; 
    new_node->next = head; 
    head = new_node; 
}

int main(){
    
}