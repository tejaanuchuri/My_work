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

bool search(struct node* head,int key){
	if(head==NULL)
		return false;
	return (head->data==key) || search(head->next,key);
}
int main(){
	struct node* head=NULL;
	int n,i,x;	
	cin>>n;
	for(i=0;i<n;i++){
		cin>>x;
		head = insert_front(head,x);
	}
	
	cin>>x;
	if(search(head,x))
		cout<<"found"<<endl;
	else
		cout<<"not found"<<endl;
	return 0;
}
