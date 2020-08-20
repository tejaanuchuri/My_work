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
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(arr[j]>arr[j+1])
				swap(arr[j],arr[j+1]);
		}
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
