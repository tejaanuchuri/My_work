#include<iostream>
#include<vector>
using namespace std;
int main(){
	long long int t,a,b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		if(a<b)
			cout<<"<"<<endl;
		else if(a>b)
			cout<<">"<<endl;
		else
			cout<<"="<<endl;
	}
	return 0;
}