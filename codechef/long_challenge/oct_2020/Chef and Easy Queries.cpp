#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int test,n,k,x,carry,i,result;
    cin>>test;
    while(test--){
        carry = 0;
        result = 0;
        cin>>n>>k;
        for(i=0;i<n;i++){
            cin>>x;
            carry = carry + x;
        }
        if(carry!=0)
        result = result + (carry/k)+1;
        else
        result=n-1;

        cout<<result<<endl;
    }
    return 0;
}