#include<iostream>
using namespace std;
int main(){
	long long int t,n,ans;
	cin>>t;
	while(t--){
		cin>>n;
		ans=0;
		while(n!=0){
			ans+=(n%10);
			n/=10;
		}
		cout<<ans<<endl;
	}
	return 0;
}
