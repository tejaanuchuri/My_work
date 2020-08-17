#include<iostream>
using namespace std;
int main(){
	long long int t,n,k,ans;
	int arr[]={1,2,5,10,50,100};
	cin>>t;
	while(t--){
		cin>>n;
		k=5;
		ans=0;
		while(1){
			if(n==0)
				break;
			if(n>=arr[k]){
				ans = ans+(n/arr[k]);
				n = n%arr[k];	
			}else
				k--;
		}
		cout<<ans<<endl;
	}
	return 0;
}