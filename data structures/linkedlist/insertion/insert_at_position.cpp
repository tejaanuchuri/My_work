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
struct node* new_node(int data){
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = data;
	newnode->next = NULL;
	return newnode;
}
int size_of_list(struct node* head){
	int count=0;
	while(head!=NULL){
		count++;
		head = head->next;
	}
	return count;
}
struct node* insert_end(struct node* head,int data,int pos){
	struct node* newnode = new_node(data);
	struct node* temp = head;
	if(pos==0){
		newnode->next = head;
		head = newnode;
	}else{
		int idx = 0;
		while(idx!=pos-1){
			idx++;
			temp = temp->next;
		}
		newnode->next = temp->next;
		temp->next = newnode;
	}
	return head;
}
int main(){
	struct node* head=NULL;
	int n,i,x,pos;	
	cin>>n;
	for(i=0;i<n;i++){
		cin>>x>>pos;
		head = insert_end(head,x,pos);
		print_list(head);
	}
	print_list(head);
	return 0;
}
