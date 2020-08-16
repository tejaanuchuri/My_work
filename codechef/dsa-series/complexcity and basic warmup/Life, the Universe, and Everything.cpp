#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int x,i;
	for(i=1;i<INT_MAX;i++){
		cin>>x;
		if(x==42)
			return 0;
		else
			cout<<x<<endl;
	}
	return 0;
}
