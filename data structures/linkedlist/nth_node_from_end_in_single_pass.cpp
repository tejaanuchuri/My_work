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
int nth_node_from_end_of_list(struct node* head,int n){
	if(head!=NULL){
		struct node* main_ptr = head;
		struct node* ref_ptr = head;
		int count=0;
		
		while(count<n){
			if(ref_ptr==NULL)
				return -1;	//no nth node from end
			ref_ptr = ref_ptr->next;
			count++;	
		}
		while(ref_ptr!=NULL){
			main_ptr = main_ptr->next;
			ref_ptr = ref_ptr->next;
		}
		return main_ptr->data;
	}
	return -1;
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
	cout<<"nth node =>>> "<<nth_node_from_end_of_list(head,n)<<endl;
	return 0;
}
