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

struct node* remove_duplicates(struct node* head){
	if(head==NULL || head->next==NULL)
		return head;
	struct node* cur = head;
	struct node* next_next;
	
	while(cur->next!=NULL){
		if(cur->data == cur->next->data){
			next_next = cur->next->next;
			free(cur->next);
			cur->next = next_next;
		}else{
			cur = cur->next;
		}
	}
	return head;
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
	head = remove_duplicates(head);
	print_list(head);
	return 0;
}
