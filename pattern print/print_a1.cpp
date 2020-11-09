#include<iostream>
using namespace std;

void print_pattern(int n){
    string ch ="ABCDEFGHIJKLMNOPQRSTUVWXYZ"; 
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<(ch[j-1]);
        }
        for(int j=1;j<=i;j++){
            cout<<(j);
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    print_pattern(n);
    return 0;
}

/* output   
4
   A1
  AB12
 ABC123
ABCD1234
			*/
