#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,t,x,sum,i,ans,k,flag;
	cin>>t;
	while(t--){
		cin>>n>>k;
		long long int arr[n];
		for(i=0;i<n;i++){
			cin>>arr[i];
		}
		sum = 0;
		ans = 1;
		flag=0;
		for(i=0;i<n;){
			if(arr[i]>k){
				flag=1;
				break;
			}else if((sum+arr[i])<=k){
				sum = sum + arr[i];
				i++;
			}else{
				sum=0;
				ans++;
			}
		}
		if(flag==1)
			cout<<"-1"<<endl;
		else
			cout<<ans<<endl;
	}
	return 0;
}
