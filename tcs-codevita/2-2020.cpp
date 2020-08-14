#include<iostream>
using namespace std;
string s;
string d;
void check(){
	long long int cnt[26]={0};
	long long int dnt[26]={0};
	for(unsigned int j=0;j<s.size();j++){
		cnt[s[j]-'a']++;
	}
	for(unsigned int i=0;i<d.size();i++){
		dnt[d[i]-'a']++;
	}
	for(int i=0;i<26;i++){
		if(cnt[i]>0 && dnt[i]>0){
			char op = ('a'+i);
			cout<<op;
		}
	}
}    
int main(){  
	getline(cin,s);
	getline(cin,d); 
    unsigned int n = d.size();  
    check();
    return 0;  
}  
