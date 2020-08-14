#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int t,a,b,p,q,x,y,i;
	cin>>t;
	while(t--){
		cin>>a>>b;
		p = floor(a/9);
		q = floor(b/9);
		if(a%9!=0)
			p++;
		if(b%9!=0)
			q++;
		//cout<<p<<" "<<q<<endl;
		if(p==q){
			cout<<"1 "<<q<<endl;
		}else if(p<q){
			cout<<"0 "<<p<<endl;
		}else{
			cout<<"1 "<<q<<endl;
		}
	}
	return 0;
}
