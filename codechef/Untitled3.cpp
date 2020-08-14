#include<stdio.h>
int main()
{	int count = 0,m,n;
	cin>>n>>m;
    for(int i=0;i<n;i++){
    	count++;
	}
	for(int j=0;j<m;j++){
    		count++;
	}
	cout<<count<<endl;
    return 0;
}


// e code ni observe cheyii
//nenu two loops rasanu
// diniki time complexcity chepagalava
//n*m ha gud
// diniki  n+m gud sp ne problem ki apply cheydham
