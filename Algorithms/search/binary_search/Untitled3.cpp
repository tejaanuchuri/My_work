#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> arr;
	int n,x,i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>x;
		arr.push_back(x);
	}
	cin>>x;
	
	if(binary_search(arr,0,arr.size()-1,x))
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	return 0;
}
