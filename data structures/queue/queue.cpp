#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main(){
	int n,x,i;
	cin>>n;
	queue<int> q;
	queue<int> p;
	
	for(i=0;i<n;i++){
		cin>>x;
		q.push(x);	//push-add end of the element
	}
	cout<<q.front()<<" "<<q.back()<<endl; //back - last element of queue
	cout<<q.size()<<endl;	//size- size of queue
	while(!q.empty()){		//empty
		x = q.front();		//front- front element of queue
		q.pop();			//pop
		cout<<x<<" ";
	}
	p.swap(q);				//swap two queue
	return 0;
}
