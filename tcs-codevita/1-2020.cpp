#include<bits/stdc++.h>
using namespace std;
int maint(){
	long long int t,n,i,result,prev;
	cin>>t;
	while(t--){
		result=0;
		cin>>n;
		long long int gift[n];
		for(i=0;i<n;i++)
			cin>>gift[i];
		for(i=0;i<n;i++){
			if(i==0){
				prev = 1;
				result+=prev;
			}else{
				if(gift[i]>gift[i-1]){
					prev+=1;
					result+=prev;
				}else{
					if(prev==1){
						prev=1;
					}else{
						prev-=1;
					}
					result+=prev;
				}
			}
		}
		cout<<result<<endl;
	}
	return 0;
}
