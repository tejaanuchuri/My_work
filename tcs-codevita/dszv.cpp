#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main(){
	long long int t,n,i,result,prev,idx;
	cin>>t;
	while(t--){
		result=0;
		cin>>n;
		long long int gift[n];
		for(i=0;i<n;i++){
			cin>>gift[i];
		}
	/*	for(i=0;i<n;i++){
			cout<<gift[i];
		}	cout<<endl;
	*/	
		long long int min =1000000001;
		idx = -1;
		for(i=0;i<n;i++){
			 if(gift[i]<min){
			 	min = gift[i];
			 	idx = i;
			 	//cout<<idx<<" ";
			 }
		}
	//	cout<<endl;
	//	cout<<min<<" "<<idx<<endl;
				prev = 1;
				result +=prev;
		for(i=idx+1;i<n;i++){
			if(gift[i-1]<gift[i]){
				prev++;
				result+=prev;
			}else if(gift[i-1]>gift[i]){
				if(prev==1){
					result+=prev;
					continue;
				}
				prev--;
				result+=prev;
			}else{
				result+=prev;
			}
		}
		prev=1;
		for(i=idx-1;i>=0;i--){
			if(gift[i]>gift[i+1]){
				prev++;
				result+=prev;	
			}else if(gift[i]<gift[i+1]){
				if(prev==1){
					result+=prev;
					continue;
				}
				prev--;
				result+=prev;
			}else{
				result+=prev;
			}
		}
		cout<<result<<endl;
	}
	return 0;
}
