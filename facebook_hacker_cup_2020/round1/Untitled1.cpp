#include<iostream>
#include<vector>
using namespace std;
int main(){
	long long int m,i,p,q,n,a,b,c,d,A,B,C,D,k;
		cin>>n>>k>>A>>B>>C>>D>>a>>b>>c>>d;
		vector<long long int> l;
		vector<long long int> h;
		for(i=0;i<k;i++){
			cin>>m;
			l.push_back(m);
		}
		for(i=0;i<k;i++){
			cin>>m;
			h.push_back(m);
		}
		for(i=0;i<n;i++){
			if(i>=k){
				p = (((A*l[i-2])+(B*l[i-1])+C)%D)+1;
				q = (((a*h[i-2])+(b*h[i-1])+c)%d)+1;
			}else{
				p = l[i];
				q = h[i];	
			}
			cout<<"p :"<<p<<endl;
			cout<<"q :"<<q<<endl;
		}
	return 0;
}
