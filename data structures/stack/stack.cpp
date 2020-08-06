#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main(){
	int n,x,i;
	cin>>n;
	stack<int> s;
	for(i=0;i<n;i++){
		cin>>x;
		s.push(x);	//push
	}
	cout<<s.size()<<endl;//size
	while(!s.empty()){	//empty
		x = s.top();	//top
		s.pop();		//pop
		cout<<x<<" ";
	}
	return 0;
}
