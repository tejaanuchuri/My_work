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
bool detect_loop(struct node* head){
	struct node* slow = head;
	struct node* fast = head;
	while(fast!=NULL && fast->next!=NULL){
		slow = slow->next;
		fast = fast->next->next;
		if(slow==fast)
			return true;
	}
	return false;
}
int main(){
	struct node* head=NULL;
	int n,i,x;	
	cin>>n;
	for(i=0;i<n;i++){
		cin>>x;
		head = insert_end(head,x);
	}
	//head->next->next->next = head->next;
	if(detect_loop(head))	
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
