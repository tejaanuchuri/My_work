#include<bits/stdc++.h>
using namespace std;
long long int linearsearch(long long int arr[10000],long long int n,long long int x){
    for(int i=0;i<n;i++)
        if(arr[i]==x)
            return 1;
    return 0;
}
int main(){
    long long int n,x;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>x;
    cout<<linearsearch(arr,n-1,x);
    return 0;
}