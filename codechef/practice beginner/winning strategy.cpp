#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int t,n,i,j,p,q,flag;
	cin>>t;
	while(t--){
		flag=1;
		p=0;
		q=0;
		cin>>n;
		long long int arr[n];
		for(i=0;i<n;i++)
			cin>>arr[i];
		sort(arr,arr+n,greater<int>());
		for(i=0;i<n;i++){
			if(i==0)
				p+=arr[i];
			else if(i==1 || i==2)
				q+=arr[i];
			else if(i%2==1)
				p+=arr[i];
			else
				q+=arr[i];
		}
		if(p==q)
			cout<<"draw"<<endl;
		else if(p<q)
			cout<<"second"<<endl;
		else
			cout<<"first"<<endl;
	}
	return 0;
}