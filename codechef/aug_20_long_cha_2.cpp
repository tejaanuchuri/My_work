#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int t,n,k,i,step,ans,flag,result,s;
	cin>>t;
	while(t--){
		ans = 1000000001;
		flag=0;
		cin>>n>>k;
		long long int arr[n];
		for(i=0;i<n;i++)
			cin>>arr[i];
			
		for(i=0;i<n;i++){
			s = arr[i];
			step=0;
			if(arr[i]==k){
				ans = 0;
				result = arr[i];
				flag=1;
				continue;
			}
			while(1){
				if(s>k)
					break;
				if(s==k){
					if(step<ans){
						ans = step;
						result = arr[i];
					}
						
					flag=1;	
				}
				s = s + arr[i];
				step++;
			}
		}
		if(flag==0)
			cout<<"-1"<<endl;
		else
			cout<<result<<endl;
	}
	return 0;
}
