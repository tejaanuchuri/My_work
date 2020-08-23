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
int size_of_list(struct node* head){
	int count=0;
	while(head!=NULL){
		count++;
		head = head->next;
	}
	return count;
}
int get_nth_node(struct node* head,int n){
	if(n==1)
		return head->data;
	return get_nth_node(head->next,n-1);
}
int get_n_th_node(struct node* head,int n){
	
	if(size_of_list(head)<n || size_of_list(head)<=0 )
		return -1;	// nth node greater than given linkedlist
		
	return get_nth_node(head,n);
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
	cout<<"nth node =>>> "<<get_n_th_node(head,n)<<endl;
	return 0;
}
