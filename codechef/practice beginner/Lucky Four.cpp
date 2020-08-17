#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int t,n,m,ans;
	cin>>t;
	while(t--){
		cin>>n;
		ans=0;
		while(n!=0){
			if((n%10)==4)	
				ans++;
			n/=10;
		}
		cout<<ans<<endl;
	}	
	return 0;
}
