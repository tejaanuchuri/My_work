#include<iostream>
using namespace std;
int main(){
	long long int t,n,i,j,ans;
	cin>>t;
	while(t--){
		ans = 0;
		cin>>n;
		long long int arr[n];
		for(i=0;i<n;i++)
			cin>>arr[i];
		for(i=0;i<n-1;i++){
			for(j=i+1;j<n;j++){
				if((arr[i]&arr[j])==arr[i])
					ans++;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}