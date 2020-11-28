#include<iostream>

using namespace std; 


struct Node{
    int data; 
    struct Node *next; 
};
struct Node *head = NULL; 

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
    int a = 1; 
    string b = a; 

}
