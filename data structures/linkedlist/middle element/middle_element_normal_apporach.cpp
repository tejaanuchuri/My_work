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
int size_of_list(struct node* head){
	int count=0;
	while(head!=NULL){
		count++;
		head = head->next;
	}
	return count;
}
void middle_element(struct node* head){
	int count = size_of_list(head);
	for(int i=1;i<=count/2;i++){
		head=head->next;
	}
	cout<<"middle element =>>> "<<head->data<<endl;
}
int main(){
	struct node* head=NULL;
	int n,i,x;	
	cin>>n;
	for(i=0;i<n;i++){
		cin>>x;
		head = insert_end(head,x);
	}
	middle_element(head);
	return 0;
}
