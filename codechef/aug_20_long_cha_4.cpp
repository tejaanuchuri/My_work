#include<iostream>
using namespace std;
void small_kmp(string s,string p){
	long long int cnt[26]={0},i,j,idx;
	for(i=0;i<s.size();i++)
		cnt[s[i]-'a']++;
	for(i=0;i<p.size();i++)
		cnt[p[i]-'a']--;
	idx = p[0] - 'a';
	for(i=0;i<26;i++){
		for(j=0;j<cnt[i];j++){
			char ch = (i+'a');
			cout<<ch;
		}
		if(idx==i)
			cout<<p;
	}cout<<endl;
	return ;
}
int main(){
	long long int t;
	cin>>t;
	while(t--){
		string s,p;
		cin>>s>>p;
		small_kmp(s,p);
	}
	return 0;
}
