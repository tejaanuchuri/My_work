#include<iostream>
#include<malloc.h>
#include<unordered_set>
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

struct node* remove_duplicates_in_unsorted_list(struct node* head){
	unordered_set<int> s;
	
	struct node* cur = head;
	struct node* prev = NULL;
	
	while(cur!=NULL){
		if(s.find(cur->data)!=s.end()){
			prev->next = cur->next;
			free(cur);
		}else{
			s.insert(cur->data);
			prev = cur;
		}
		cur = prev->next;
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
	head = remove_duplicates_in_unsorted_list(head);
	print_list(head);
	return 0;
}
