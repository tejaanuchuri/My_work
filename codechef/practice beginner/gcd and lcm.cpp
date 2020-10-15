#include<iostream>
using namespace std;
long long int gcd(long long int a,long long int b){
	if (b == 0)
    		return a;
  	return gcd(b, a % b);
}
int main(){
	long long int t,a,b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		long long int gcd_value = gcd(a,b);
		long long int lcm_value = a*b;
		lcm_value = (lcm_value/gcd_value);
		cout<<gcd_value<<" "<<lcm_value<<endl;
	}
	return 0;
}