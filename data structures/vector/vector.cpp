#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
	int n,x,i;
	cin>>n;
	vector<int> v;  //vector declaration
	vector<int> p;
	for(i=0;i<n;i++){
		v.push_back(x);	//push - add element at the end of the vector
	}
	cout<<v.size()<<endl;	//size- size of vector
	cout<<v.front()<<endl;	//front - return front element in the vector
	cout<<v.back()<<endl;	//back- return last element in the vector
	cout<<v.at(1)<<endl;	// the element at the specific position
	//v.begin() --starting element of iterator
	//v.end()	--end point if the iterator
	v.pop_back();	// remove last element 
	v.erase(v.begin()+2);	// remove specific position
	v.erase(v.begin(),v.begin()+3);	//remove particular range
	v.clear();	// remove all elements in the vector
//	v.swap(p);				//swap two vectors
	return 0;
}
