#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int t,n,m,x,y,p,q;
		p=-1;
		q=-1;
		x=0;
		y=0;
	cin>>t;
	while(t--){
		cin>>n>>m;
		x+=n;
		y+=m;
		if(x>y && (x-y)>p){
				p = (x-y);
		}else if(y>x && (y-x)>q){
			q=(y-x);
		}
	}
	if(p>q)
		cout<<"1 "<<p;
	else
		cout<<"2 "<<q;
	return 0;
}
