#include<bits/stdc++.h>
using namespace std;
void print(long long int arr[100],long long int n){
	for(long long int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	return ;
}
void selection_sort(long long int arr[100],long long int n){
	print(arr,n);
	for(long long int i=0,min_idx,j;i<n-1;i++){
		min_idx = i;
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[min_idx]){
				min_idx = j;
			}
		}
		swap(arr[i],arr[min_idx]);
	}
	print(arr,n);
	return ;
}
int main(){
	long long int t,n,i;
	cin>>n;
	long long int arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	selection_sort(arr,n);
	return 0;
}
