#include<iostream>
using namespace std;
int main(){
	long long int p,q,x,y,z,i,r=0,ans=0;
	cin>>p>>x>>q>>y>>z;
	for(i=1;;i++){
        ans++;
		if(i>=p){
            r = r+x;
        }
        if(i>=q){
            r=r+y;
        }
        if(r>=z)
            break;
	}
	cout<<(ans)<<endl;
	return 0;
}
