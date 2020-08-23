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
void nth_node_from_end_of_list(struct node* head,int n){
	static int i = 0;
	if(head==NULL)
		return ;
	nth_node_from_end_of_list(head->next,n);
	if(++i == n)
		cout<<"nth node from end =>>> "<<head->data<<endl;
}
int main(){
	struct node* head=NULL;
	int n,i,x;	
	cin>>n;
	for(i=0;i<n;i++){
		cin>>x;
		head = insert_end(head,x);
	}
	cin>>n;
	nth_node_from_end_of_list(head,n);
	return 0;
}
