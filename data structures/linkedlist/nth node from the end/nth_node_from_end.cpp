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
struct node* insert_front(struct node* head,int data){
	struct node* newnode = new_node(data);
	newnode->next = head;
	return newnode;
}
int nth_node_from_end_of_list(struct node* head,int n){
	struct node* temp = head;
	int len = 0;
	while(temp!=NULL){
		temp = temp->next;
		len++;
	}
	if(len<n)
		return -1;	// given size of linkedlist lessthan nth node
		
	for(int i=1;i<len-n+1;i++){
		head = head->next;
	}
	return head->data;
}
int main(){
	struct node* head=NULL;
	int n,i,x;	
	cin>>n;
	for(i=0;i<n;i++){
		cin>>x;
		head = insert_front(head,x);
	}
	cin>>n;
	cout<<"nth node =>>> "<<nth_node_from_end_of_list(head,n)<<endl;
	return 0;
}
