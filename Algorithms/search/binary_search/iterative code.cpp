#include<bits/stdc++.h>
using namespace std;
bool binary_search(vector<int>& arr,int key){
		int low=0,high=arr.size()-1;
		
		while(low<=high){
			int mid  = low + (high-low)/2;
			
			if(arr[mid]==key)		// if middle element is equal to key
				return true;
			else if(key<arr[mid])	// key found in left part so move high index to mid-1 position
				high = mid-1;
			else					// key found in right part so move low index to mid+1 position
				low = mid+1;		
		}
		return false;				// if no element found return false
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
	
	if(binary_search(arr,x))
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	return 0;
}
