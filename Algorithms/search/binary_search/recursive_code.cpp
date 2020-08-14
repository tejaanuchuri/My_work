#include<bits/stdc++.h>
using namespace std;
bool binary_search(vector<int>& arr,int low,int high,int key){
		if(low>high)										// if no element found return false
			return false;
			
		int mid = low + (high-low)/2;
		if(arr[mid]==key)
			return true;
		
		if(key<arr[mid])							 		// key found in left part 
			return binary_search(arr,low,mid-1,key);
		else												// key found in right part
			return binary_search(arr,mid+1,high,key);		
}
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
