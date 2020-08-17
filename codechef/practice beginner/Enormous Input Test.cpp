#include<bits/stdc++.h>
#include<malloc.h>
using namespace std;
int main(){
	long long int t,n,k,ans=0;
		cin>>n>>k;
		long long int* arr=(long long int*)malloc(sizeof(long long int)*n);
		for(long long int i=0;i<n;i++){
			cin>>arr[i];
			if(arr[i]%k==0)	
				ans++;
		}
		cout<<ans;	
	return 0;
}