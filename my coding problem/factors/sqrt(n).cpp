#include <bits/stdc++.h>
#include<vector>
using namespace std;
#define ll long long int
#define vector vector<long long int>
#define pb push_back 
int main(){
	ll n;
	vector v;
	cin>>n;
	
	for(ll i=1;i*i<=n;i++){
		if(n/i==i && n%i==0){
			v.pb(i);
		}else if(n%i==0){
			v.pb(i);
			v.pb(n/i);
		}
	}
	sort(v.begin(),v.end());
	for(ll i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	return 0;
}
