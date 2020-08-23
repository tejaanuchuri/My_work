#include<iostream>
#include<malloc.h>
using namespace std;
struct node{
	int data;
	struct node *next;
};
void print_list(struct node* head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}cout<<endl;
	return ;
}
int size_of_list(struct node* head){
	int count=0;
	while(head!=NULL){
		count++;
		head = head->next;
	}
	return count;
}
struct node* delete_list(struct node* head){
	struct node* temp;
	while(head!=NULL){
		temp = head->next;
		free(head);
		head = temp;
	}
	return head;
}
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
int main(){
	struct node* head=NULL;
	int n,i,x;	
	cin>>n;
	for(i=0;i<n;i++){
		cin>>x;
		head = insert_front(head,x);
	}
	cout<<"size of the linked list==> "<<size_of_list(head)<<endl;
	head = delete_list(head);
	cout<<"size of the linked list==> "<<size_of_list(head)<<endl;
	return 0;
}
