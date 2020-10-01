#include<iostream>
using namespace std;
int main(){
	long long int n,m;

		cin>>n>>m;
		if(n>m)
			cout<<(n-m)<<endl;
		else
			cout<<(n+m)<<endl;
	return 0;
}