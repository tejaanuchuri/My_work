#include<iostream>
#include<vector>
using namespace std;
int check(long long int n){
	if(n<2)
		return 0;
	for(long long int i=2;i*i<=n;i++){
		if(n%i==0)
			return 0;
	}
	return 1;
}
int main(){
	long long int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		if(check(n))
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
	return 0;
}
