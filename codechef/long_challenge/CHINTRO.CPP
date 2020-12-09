#include<iostream>
using namespace std;
int main(){
	char y[]="Good boi";
	char n[]="Bad boi";
	int s,data,r;
	cin>>s>>r;
	while(s--){
		cin>>data;
		if(data<r)
			cout<<n<<endl;
		else
			cout<<y<<endl;
	}
	return 0;
}
