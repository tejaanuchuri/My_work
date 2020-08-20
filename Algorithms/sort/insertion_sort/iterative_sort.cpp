#include<bits/stdc++.h>
using namespace std;
void print(long long int arr[100],long long int n){
	for(long long int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	return ;
}
void insertion_sort_rec(long long int arr[100],long long int n){
	if(n<=1)
		return ;
	insertion_sort_rec(arr,n-1);
	int last  = arr[n-1];
	int j = n-2;
	while(j>=0 && arr[j]>last){
		arr[j+1] = arr[j];
		j--;
	}
	arr[j+1] = last;
}
int main(){
	long long int t,n,i;
	cin>>n;
	long long int arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	print(arr,n);
	insertion_sort_rec(arr,n);
	print(arr,n);
	return 0;
}
