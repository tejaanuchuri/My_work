#include<bits/stdc++.h>
using namespace std;
void print(long long int arr[100],long long int n){
	for(long long int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	return ;
}
void rec_bubble_sort(long long int arr[100],long long int n){
	if(n==1)
		return ;
	for(int i=0;i<n-1;i++){
		if(arr[i]>arr[i+1])
			swap(arr[i],arr[i+1]);
	}
	rec_bubble_sort(arr,n-1);
	return ;
}
int main(){
	long long int t,n,i;
	cin>>n;
	long long int arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	print(arr,n);
	rec_bubble_sort(arr,n);
	print(arr,n);
	return 0;
}
