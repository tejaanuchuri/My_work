#include <bits/stdc++.h>
using namespace std;
int display(long long int a[100000],long long int n){ 
    for (long long int i = 0; i < n-1; i++) { 
            long long int x = a[i]&a[i+1];
                if(x<1)
                    return 0; 
    }
    return 1; 
} 
int findPermutations(long long int a[100000],long long int n){ 
    sort(a, a + n); 
    do { 
        if(display(a, n)){
            for(long long int i=0;i<n;i++)
                cout<<a[i]<<" ";
            cout<<endl;
            return 1;
        } 
    } while (next_permutation(a, a + n));
    return 0;
} 
int main(){
    long long int t,n,i;
    cin>>t;
    while(t--){
        cin>>n;
            long long int a[n];
            for(i=0;i<n;i++)
                a[i] = i+1;
            
            if(!findPermutations(a, n))
                cout<<"-1"<<endl;
    }return 0;
}