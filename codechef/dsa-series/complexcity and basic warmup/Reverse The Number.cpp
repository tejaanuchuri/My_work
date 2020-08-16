#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int t,n,m;
	cin>>t;
	while(t--){
		cin>>n;
		m=0;
		while(n!=0){
			m = m*10 + (n%10);
			n/=10;
		}
		cout<<m<<endl;
	}
	return 0;
}
