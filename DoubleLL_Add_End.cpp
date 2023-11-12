#include <iostream>
#include<stdlib.h>
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
      cout<< ptr->data <<"<==>"; 
      ptr = ptr->next; 
  } 
  cout<<"NULL";
}   
void addAtEnd(int val) { 
	node*temp,*tp;
	temp=new node(); //1. allocate node
   	temp->data=val;  //2. assign data element
   					//3. assign null to the next and prev of the new node
   	temp->prev=NULL; 
   	temp->next=NULL;   
   	tp=head;  
 //4. Check the list is empty or not, if empty make the new node as head 
   if (head == NULL) {
   head->prev = temp;
   head = temp;
}
   //5. Else, traverse to the last node
   else{
   	while(tp->next!=NULL)
   	{   
	   tp=tp->next;
	}
   //6. Adjust the links
	tp->next=temp;
	// assign prev of temp to tp
	temp->prev=tp;
	 }	
} 

void deleteFirst() { 
 if(head != NULL) {
    
    //1. if head is not null, create a
    //   temp node pointing to head
    node* temp = head;
    //2. move head to next of head
    head = head->next;
    //3. delete temp node
    free(temp); 

    //4. If the new head is not null, then
    //   make prev of the new head as null
    if(head != NULL)
      head->prev = NULL;
  }	
} 

//Delete last node of the list
    void delete_Last() {
      if(head == NULL) {
        cout<<"List is empty";
        } else {
          node* temp = head;
          while(temp->next!= NULL)
          {
          	temp = temp->next;
		  }    
          node* temp2 = temp->prev;
          temp2->next = NULL;
          free(temp); 
        }
    }

int main() {
  	insert(3);
   	insert(1);
   	cout<<"The doubly linked list is after beginning Insertion: \n";
   display(); 
   	cout<<endl;
   cout<<"Adding Last:\n"<<endl; 
   	addAtEnd(5);
   	display();
	   
	cout<<endl<<"After first Deletion:\n";
	deleteFirst(); 
	display();
	
	
	cout<<endl<<"After last Deletion:\n";
	delete_Last(); 
	display();
return 0;
}
