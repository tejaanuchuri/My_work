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
int length_of_linkedlist(struct node* head){
	if(head==NULL)
		return 0;
	return 1 + length_of_linkedlist(head->next);
}
struct node* middle_element(struct node* head){
	if(head==NULL)	
		return head;
	struct node* slow = head;
	struct node* fast = head;
	while(fast!=NULL && fast->next!=NULL){
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}
struct node* reverse(struct node* head){
	struct node* cur = head;
	struct node* prev = NULL;
	struct node* next = NULL;
	
	while(cur!=NULL){
		next  = cur->next;
		cur->next = prev;
		prev = cur;
		cur = next;
	}
	head = prev;
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
bool check_palindrome(struct node* head){
	int n = length_of_linkedlist(head);
	//	print_list(head);
	struct node* mid = middle_element(head);
	if(n%2!=0)
		mid = mid->next;
		//print_list(mid);
	mid = reverse(mid);
		//print_list(mid);
	while(mid!=NULL){
		if(head->data!=mid->data)
			return false;
		mid = mid->next;
		head=head->next;
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
