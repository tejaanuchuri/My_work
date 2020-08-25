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
void print_list(struct node* head){
	while(head!=NULL){
		if(head->next==NULL)	
			cout<<head->data<<endl;
		else{
			cout<<head->data<<"->";	
		}
		head=head->next;
	}
	return ;
}

void remove_duplicates(struct node* head){
	struct node* to_free;
	
	if(head == NULL)
		return ;
	if(head->next!=NULL){
		if(head->data == head->next->data){
			to_free = head->next;
			head->next = head->next->next;
			free(to_free);
			remove_duplicates(head);
		}else{
			remove_duplicates(head->next);
		}
	}
	return ;
}
int main(){
	struct node* head=NULL;
	int n,i,x;	
	cin>>n;
	for(i=0;i<n;i++){
		cin>>x;
		head = insert_end(head,x);
	}
	print_list(head);
	remove_duplicates(head);
	print_list(head);
	return 0;
}
