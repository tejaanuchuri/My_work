#include<iostream>
using namespace std;
int main(){
	long long int t,n,d,ans,p,r,i,x;
	cin>>t;
	while(t--){
        cin>>n>>d;
        p=0;
        r=0;
        ans=0;
        for(i=0;i<n;i++){
            cin>>x;   
            if(x>9 && x<80){
                p++;
            }else{
                r++;
            }
        }
        ans = ans + (p/d);
        ans = ans + (r/d);
        if(p%d!=0){
            ans++;
        }
        if(r%d!=0){
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}