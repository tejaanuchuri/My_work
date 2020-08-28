#include<iostream>
using namespace std;
void print(int arr[100],int n){
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}
void rearrange(int arr[100],int n){	
	for(int i=0;i<n;i++){
		if(arr[i]!=-1 && arr[i]!=i){
			int temp = arr[i];
			arr[i] = arr[arr[i]];
			arr[arr[i]] = temp;
		}else{
			i++;
		}
	}
}
int main(){
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	print(arr,n);
	rearrange(arr,n);
	print(arr,n);
	return 0;
}
