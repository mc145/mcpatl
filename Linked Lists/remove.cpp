#include<iostream>
#include<stdlib.h> 


using namespace std; 


struct Node{
    int data; 
    struct Node *next; 
};
struct Node *head = NULL; 

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

int main(){
    
}
