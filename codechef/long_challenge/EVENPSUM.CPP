#include<iostream>
using namespace std;
int main(){
	long long int t,x,y,ans;
	cin>>t;
	while(t--){
        ans = 0;
        cin>>x>>y;
        ans = ans + ((x/2)*(y/2));
        ans = ans + (((x/2)+(x%2))*((y/2)+(y%2)));
        cout<<ans<<endl;
    }
    return 0;
}
