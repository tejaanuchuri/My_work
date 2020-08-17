#include<iostream>
#include<vector>
using namespace std;
int main(){
	long long int n,e,o,x,i;
		cin>>n;
		e=0;
		o=0;
		for(i=0;i<n;i++){
			cin>>x;
			if(x%2==0)
				e++;
			else
				o++;
		}
		if(e>o)
			cout<<"READY FOR BATTLE"<<endl;
		else
			cout<<"NOT READY"<<endl;
	return 0;
}