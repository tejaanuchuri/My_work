#include<iostream>
#include<malloc.h>
#include<stack>
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
bool check_palindrome(struct node* head){
	stack<int> s;
	struct node* temp = head;
	while(head!=NULL){
		s.push(head->data);
		head = head->next;
	}
	while(temp!=NULL){
		int i = s.top();
		s.pop();
		if(temp->data!=i)
			return false;
		temp = temp->next;
	}
	return true;
}
int main(){
	struct node* head=NULL;
	int n,i,x;	
	cin>>n;
	for(i=0;i<n;i++){
		cin>>x;
		head = insert_end(head,x);
	}
	if(check_palindrome(head))	
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
