#include<iostream>
#include<vector>
using namespace std;
void fact(int n) {
    int c=0,p=0;
    vector<int> v(250,0);
    v[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=p;j++){
            v[j]=v[j]*i + c;
            c = v[j]/10;
            v[j] = v[j]%10;
        }
        while(c){
            p++;
            v[p]=c%10;
            c/=10;
        }
    }
    for(int i=p;i>=0;i--){
        cout<<v[i];
    }
}
int main(){
	long long int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		
		fact(n);
		cout<<endl;
	}
	return 0;
}
