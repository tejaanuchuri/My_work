#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int t,n,m,ans;
	cin>>t;
	while(t--){
		cin>>n;
		ans=n%10;
		m=0;
		while(n!=0){
			m=(m*10)+(n%10);
			n/=10;
		}
		ans+=(m%10);
		cout<<ans<<endl;
	}	
	return 0;
}
