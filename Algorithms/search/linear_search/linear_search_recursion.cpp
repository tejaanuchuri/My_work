#include<bits/stdc++.h>
using namespace std;
long long int linearsearch(long long int arr[10000],long long int n,long long int x){
    if(n<0)
        return 0;
    return (x==arr[n]) || linearsearch(arr,n-1,x);
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