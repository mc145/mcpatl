#include<iostream>

using namespace std; 


struct Node{
    int data; 
    struct Node *next; 
};
struct Node *head = NULL; 

void display(){
    struct Node* ptr; 
    ptr = head; 
    while(ptr != NULL){
        cout << ptr->data << " " ; 
        ptr = ptr->next; 
    }
}

int main(){
     
}