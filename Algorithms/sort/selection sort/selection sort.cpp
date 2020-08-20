#include<bits/stdc++.h>
using namespace std;
void selection_sort(long long int arr[n],long long int n){
	for(long long int i=0,min_idx;i<n-1;i++){
		min_idx = i;
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[min_idx]){
				min_idx = j
			}
		}
		swap(arr[i],arr[min_idx]);
	}
	print(arr,n);
	return ;
}
int main(){
	long long int t,n;
	cin>>n;
	long long int arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	selection_sort(arr,n);
	return 0;
}
