#include<iostream>
#include<vector>
using namespace std;
int main(){
	long long int t,n,m,o;
	cin>>t;
	while(t--){
		cin>>n;
		o=n;
		m=0;
		while(n!=0){
			m = m*10 + (n%10);
			n/=10;
		}
		if(m==o)
			cout<<"wins"<<endl;
		else
			cout<<"loses"<<endl;
	}
	return 0;
}