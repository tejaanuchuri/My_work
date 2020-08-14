#include<iostream>
using namespace std;
int prime(long long int n){
	for(long long int i=2;i*i<=n;i++){
		if(n%i==0)
			return 0;
	}
	return 1;
}
int main(){
	long long int d,p,i,j,count,ans;
	cin>>d>>p;
	count=0;
	ans=0;
	for(i=2,j=i;i<=d;){
		if(prime(j) && j<=d){
			j+=12;
			count++;
		}else{
			i++;
			j=i;
			count=0;
		}
		if(count==p){
			ans++;
			count=0;
		}
	}
	cout<<ans<<endl;
	return 0;
}
