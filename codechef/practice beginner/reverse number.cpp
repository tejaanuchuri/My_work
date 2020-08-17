#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int t,n,m,ans,p;
	cin>>t;
	while(t--){
		cin>>n;
		ans=0;
		while(n!=0){
			ans = ans*10 + (n%10);
			n/=10;
		}
		cout<<ans<<endl;
	}	
	return 0;
}
