#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,i;
	cin>>n;
	long long int arr[n];
	
	//write array
	for(i=0;i<n;i++)
		cin>>arr[i];
	//print array
	for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
		 
	return 0;
}
