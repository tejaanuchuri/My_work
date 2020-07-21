#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	ll n,flag=0;
	cin>>n;
	
	for(ll i=2;i<=n/2;i++){
		if(n%i==0){
			flag=1;
			break;
		}
	}
	if(flag==0)
		cout<<" prime number";
	else 
		cout<<" not a prime number";
	return 0;
}
