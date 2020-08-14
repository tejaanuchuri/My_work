#include<bits/stdc++.h>
using namespace std;
int chef_wars(long long int p,long long int h){
	while(1){
		if(p<=0)
			return 1;
		if(h<=0)
			return 0;
		p=p-h;
		h = floor(h/2);
	}
}
int main(){
	long long int t,p,h,i;
	cin>>t;
	while(t--){
		cin>>p>>h;
		long long int ans=0;
		cout<<chef_wars(p,h)<<endl;
	}
	return 0;
}
