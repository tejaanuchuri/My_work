#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,m,i,sum,x,temp;
	cin>>n>>m;
	sum = ((n*(n+1))/2);
	long long int M[500010]={0},arr[n];
	for(i=0;i<n;i++){
		arr[i]=(i+1);
		M[i+1]++;
	}		
	for(i=0;i<m;i++){
		cin>>x;
		if(M[x]>0){
			temp = arr[0];
			arr[0] = arr[n-1];
			arr[n-1] = temp;
		}else{
			sum = sum - arr[n-1];
			M[arr[n-1]]--;
			arr[n-1]=x;
			M[arr[n-1]]++;
			sum = sum + arr[n-1];
		}
		cout<<sum<<endl;
	}
	return 0;
}
