#include<iostream>
#include<vector>
using namespace std;
int main(){
	long long int t,n,k,ans;
	int arr[]={1,2,4,8,16,32,64,128,256,512,1024,2048};
	cin>>t;
	while(t--){
		cin>>n;
		k=11;
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
