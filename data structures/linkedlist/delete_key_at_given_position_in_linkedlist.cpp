#include<iostream>
#include<malloc.h>
using namespace std;
struct node{
	int data;
	struct node *next;
};
struct node* delete_key_at_given_position(struct node* head,int pos){
	if(head==NULL)
		return head;
	if(head!=NULL && pos==0){
		struct node* temp = head->next;
		free(head);
		head = temp;
	}else{
		struct node* temp = head;
		int idx=0;
		while(temp!=NULL && idx<pos-1){
			temp = temp->next;
		}
		if(temp==NULL || temp->next==NULL)
			return head;
		struct node* next = temp->next->next;
		free(temp->next);
		temp->next = next;
	}
	return head;
}
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
	print_list(head);
	cin>>x;
	head = delete_key_at_given_position(head,x);
	print_list(head);
	return 0;
}
