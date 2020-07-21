#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
	ll n;
	cin>>n;
	
	for(ll i=1;i<=n/2;i++){
		if(n%i==0){
			cout<<i<<" ";
		}
	}
	return 0;
}
