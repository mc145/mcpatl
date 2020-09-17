#include<iostream>

using namespace std; 


struct Node{
    int data; 
    struct Node *next; 
};
struct Node *head = NULL; 

Node* traverse(int n){
    Node *ans = head; 

    for(int i = 0; i<n-1; i++){
        ans = ans->next; 
    }
    return ans; 
}


int main(){

}