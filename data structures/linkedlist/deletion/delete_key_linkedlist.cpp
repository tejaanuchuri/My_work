#include<iostream>
#include<malloc.h>
using namespace std;
struct node{
	int data;
	struct node *next;
};
struct node* delete_key_list(struct node* head,int key){
	if(head==NULL || head->data==key)
		return head;
	if(head!=NULL && head->data==key){
		struct node* temp = head;
		free(head);
		head = temp;
	}else{
		struct node* temp = head;
		struct node* prev = NULL;
		while(temp!=NULL && key!=temp->data){
			prev = temp;
			temp = temp->next;
		}
		prev->next = temp->next;
		free(temp);
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
	head = delete_key_list(head,x);
	print_list(head);
	return 0;
}
