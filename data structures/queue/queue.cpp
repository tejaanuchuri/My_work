#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main(){
	int n,x,i;
	cin>>n;
	priority_queue<int> q;
	//priority_queue<int> p;
	
	for(i=0;i<n;i++){
		cin>>x;
		q.push(x);	//push-add end of the element
	}
	cout<<q.size()<<endl;	//size- size of priority_queue
	while(!q.empty()){		//empty
		x = q.top();		//top - first element priority_queue
		q.pop();			//pop - remove element
		cout<<x<<" ";
	}
//	p.swap(q);				//swap two queue
	return 0;
}
