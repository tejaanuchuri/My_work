#include<bits/stdc++.h>
using namespace std;
void print(long long int arr[100],long long int n){
	for(long long int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	return ;
}
void bubble_sort(long long int arr[100],long long int n){
	print(arr,n);
	for(int i=0;i<n-1;i++){
		int flag = 1;
		for(int j=0;j<n-1-i;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
				flag=0;
			}
		}
		if(flag==1)
			break;
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
	bubble_sort(arr,n);
	return 0;
}
