#include<iostream>
#include<malloc.h>
using namespace std;
struct node{
	int data;
	struct node *next;
};
struct node* new_node(int data){
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = data;
	newnode->next = NULL;
	return newnode;
}
struct node* insert_end(struct node* head,int data){
	struct node* newnode = new_node(data);
	if(head==NULL)
		return newnode;
	else{
		struct node* temp = head;
		while(temp->next!=NULL){
			temp = temp->next;
		}
		temp->next = newnode;
	}
	return head;
}
/*
Initialize mid element as head and initialize a counter as 0.
Traverse the list from head, while traversing increment the counter and change mid to mid->next whenever the counter is odd.
So the mid will move only half of the total length of the list.
*/
void middle_element(struct node* head){
	int count = 0;
	struct node* mid = head;
	while(head!=NULL){
		if(count&1)
			mid = mid->next;
		head = head->next;
		count++;
	}
	if(mid->next!=NULL)
		cout<<"mid-element =>>>"<<mid->data<<endl;
}
int main(){
	struct node* head=NULL;
	int n,i,x;	
	cin>>n;
	for(i=0;i<n;i++){
		cin>>x;
		head = insert_end(head,x);
	}
	middle_element(head);
	return 0;
}
