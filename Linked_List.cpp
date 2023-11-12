#include<iostream>
#include<stdio.h>
#include<stdlib.h>//used for malloc function or new. Also it is used for free keyword
using namespace std;
struct node{
	int data;
	node*next;
};
node*head=NULL;//global variable, can be accessed anywhere

void Insertbegin(int x)
{
	node*temp=new node();
	temp->data=x;
	temp->next=head;
	head=temp;
	
}

void Print(){
	node*temp=new node();
	temp=head;
	cout<<"List is:";
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<"\n";
}

insertend(int x)
{
	node *temp,*ptr;
	temp=new node();
	temp-> data = 40;
	temp->next = NULL;
	ptr = head;
while(ptr->next!=NULL){

ptr=ptr -> next;

    }

 ptr -> next = temp;
}


void delete_first()
{
	if(head==NULL)
	{
		cout<<"The List is Empty!";
	}
	else
	{
		node*temp=new node();// or node*temp=head;
		temp=head;
		head=head->next;
		free(temp);
		temp=NULL;// To make free memory
	}
}

void delete_last()
{
if(head==NULL)
	{
		cout<<"The List is Empty!";
	}
	else
	{
		node*temp=head;
		node*temp2=head;
		while(temp->next!=NULL){
			temp2=temp;
			temp=temp->next;
		}
			temp2->next=NULL;
		free(temp);
	//temp=NULL;		
	}
}

int main()
{
cout<<"How many lists do you have?\n";
int n,x;
cin>>n;
for(int i=0;i<n;i++){
	cout<<"Enter the element:\n";
	cin>>x;
	Insertbegin(x);
	Print();	
}
	cout<<"********************************************\n";
cout<<"List after end insert:\n";
	insertend(44);
	Print();
	
		cout<<"********************************************\n";
	cout<<"after first delete:\n";
	delete_first();
		Print();
		
			cout<<"********************************************\n";
		cout<<"after last delete:\n";
	delete_last();
		Print();
return 0;
}

