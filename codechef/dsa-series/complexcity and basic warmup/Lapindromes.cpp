#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int t,n,x,y,i;
	string s;
	cin>>t;
	while(t--){
		cin>>s;
		int p[26]={0};
		int q[26]={0};
		n = s.size();
		x=0;
		if(n%2!=0)
			y=n/2+1;
		else
			y=n/2;
		for(i=0;i<n/2;i++){
			p[s[x++]-'a']++;
			q[s[y++]-'a']++;
		}
		int flag=0;
		for(i=0;i<26;i++){
			if(p[i]!=q[i])
				flag=1;
		}
		if(flag==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
