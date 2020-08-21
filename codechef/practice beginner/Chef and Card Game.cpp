#include<bits/stdc++.h>
using namespace std;
long long int digits(long long int n){
	long long int m=0;
	while(n!=0){
		m = m + (n%10);
		n/=10;
	}
	return m;
}
int main(){
	long long int t,n,x,y,p,q,a,b,i;
	cin>>t;
	while(t--){
		cin>>n;
		a=0;
		b=0;
		for(i=0;i<n;i++){
			cin>>x>>y;
			p = digits(x);
			q = digits(y);
			//cout<<"p q"<<endl;
			//cout<<p<<" "<<q<<endl;
			if(p>q)
				a+=1;
			else if(p<q)
				b+=1;
			else{
				a+=1;
				b+=1;
			}
			//cout<<"a b"<<endl;
			//cout<<a<<" "<<b<<endl;
		}
		if(a>b)
			cout<<"0 "<<a<<endl;
		else if(a<b)
			cout<<"1 "<<b<<endl;
		else
			cout<<"2 "<<a<<endl;
	}
	return 0;
}
