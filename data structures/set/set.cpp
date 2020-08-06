#include<bits/stdc++.h>
#include<set>
using namespace std;
int main(){
	int n,x,i;
	cin>>n;
	set<int> s(n);  		//set declaration
	for(i=0;i<n;i++){
		cin>>x;
		s.insert(x);	//add element 
	}
	cout<<s.empty()<<endl;	//check set is empty or not
	// s.begin()
	// s.end()
	// s.rbegin()
	// s.rend()
	// s.size()
	// s.max_size()
	// s.erase(iterator)
	// s.erase(value)
	// s.clear()
	// s.find(g)
	//print all elements in the set
	for(set<int>::iterator i=s.begin();i!=s.end();++i){
		cout<<*i<<endl;
	}
	return 0;
}
