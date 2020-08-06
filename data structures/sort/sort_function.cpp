#include<bits/stdc++.h>
#include<map>
using namespace std;
int main(){
	int n,x,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	
	sort(arr,arr+n); // increasing sort
	
		for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	
	sort(arr,arr+n,greater<int>());	// decreasing sort 
	
		for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}
