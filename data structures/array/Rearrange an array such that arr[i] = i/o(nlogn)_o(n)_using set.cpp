#include<iostream>
#include<set>
using namespace std;
void print(int arr[100],int n){
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}
void rearrange(int arr[100],int n){
	set<int> s;
	for(int i=0;i<n;i++)	//nlogn
		s.insert(arr[i]);
	for(int i=0;i<n;i++){
		if(s.find(i)!=s.end()){
			arr[i] = i;
		}else{
			arr[i] = -1;
		}
	}
}
int main(){
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	print(arr,n);
	rearrange(arr,n);
	print(arr,n);
	return 0;
}
