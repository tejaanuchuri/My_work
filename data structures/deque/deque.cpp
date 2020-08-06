#include<bits/stdc++.h>
#include<deque>
using namespace std;
int main(){
	int n,x,i;
	cin>>n;
	deque<int> dq(n);  		//deque declaration
	for(i=0;i<n;i++){
		cin>>x;
		dq.push_back(x);	//push_back - add element at the end of the vector
	}
	cout<<dq.empty()<<endl;
	cout<<dq.max_size()<<endl;
	cout<<dq.size()<<endl;	//size- size of vector
	cout<<dq.front()<<endl;	//front - return front element in the vector
	cout<<dq.back()<<endl;	//back- return last element in the vector
	dq.push_front(9);	//push_front - insert at front 
	dq.push_back(8);		//push_back- insert at end last 
	
	cout<<dq.at(1)<<endl;	// the element at the specific position
	//dq.begin() --starting element of iterator
	//dq.end()	--end point if the iterator
	//dq.rbegin()--end point if the iterator
	//dq.rend() --starting element of iterator
	dq.pop_back();	// remove last element 
	dq.pop_front();	// remove frist element 
	
	dq.erase(dq.begin()+2);	// remove specific position
	dq.erase(dq.begin(),dq.begin()+3);	//remove particular range
	dq.clear();	// remove all elements
//	v.swap(p);				//swap two deque
	return 0;
}
