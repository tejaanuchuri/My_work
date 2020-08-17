#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int t,n,ans,i;
	cin>>t;
	while(t--){
		cin>>n;
		for(i=1;;i++){
			if(i*i<=n)
				ans=i;
			else
				break;
		}
		cout<<ans<<endl;
	}
	return 0;
}
