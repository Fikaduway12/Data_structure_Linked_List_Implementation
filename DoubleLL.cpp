#include <iostream>
using namespace std;

struct node { 
   int data; 
   node *prev; 
   node *next; 
}; 
node* head = NULL; 

void insert(int newdata) { 
   node* newnode = new node(); 
   newnode->data  = newdata; 
   newnode->prev = NULL; 
   newnode->next = head;     
   if(head !=  NULL) 
   {
   head->prev = newnode ; 
   } 
      head = newnode; 
}   

void display() { 
   node* ptr;
   ptr = head;  
   while(ptr != NULL) { 
      cout<< ptr->data <<" "; 
      ptr = ptr->next; 
  } 
} 

int main() { 
   insert(3);
   insert(1);
   insert(7);
   insert(2);
   //insert(9);
   cout<<"The doubly linked list is: ";
   display(); 
   return 0; 
}
