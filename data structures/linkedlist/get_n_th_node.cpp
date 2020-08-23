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

int get_n_th_node(struct node* head,int n){
	
	if(size_of_list(head)<n || size_of_list(head)<=0 )
		return -1;	// nth node greater than given linkedlist
		
	int count=1;
	while(head!=NULL){
		if(count==n)
			return head->data;
		else
			count++; head=head->next;
	}
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
