#include<iostream>
#include<fstream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;
int main(){
	ifstream in_files;
	ofstream out_files;
	in_files.open("travel_restrictions_input.txt");
	
	if(in_files.fail()){
		cout<<"error uploading"<<endl;
		exit(1);
	}
	out_files.open("output.txt");
	string I;
	string O;
	long long int t,n,i,j,k,h,p;
	in_files >> t;
	for(i=0;i<t;i++){
		long long int input[2][50]={0};
		in_files >> n;
		in_files >> I;
		
			for(j=0;j<n;j++){
				if(I[j]=='Y')
				  input[0][j]=1;
				else
				  input[0][j]=0;
			}
		
		in_files >> O;
			for(j=0;j<n;j++){
				if(O[j]=='Y')
				  input[1][j]=1;
				else
				  input[1][j]=0;
			}
			
		
		vector<vector<long long int > > output;
		vector<long long int > v(n);
		for(int k=0;k<n;k++){
			output.push_back(v);
		}
		for(k=0;k<n;k++){
			output[k][k]=1;
		}	int flag=0;
			for(k=0,j=1;j<n;j++,k++){
				if(input[1][k]==1){
					if(input[0][j]==1){
						output[0][j]=1;
					}else
						flag=1;
					
				}else
					flag=1;
				if(flag==1)
					break;
			}
			for(p=1;p<n-1;p++){
				k=p;
				int flag=0;
				for(j=p-1;j>=0;j--,k--){
					if(input[1][k]==1){
						if(input[0][j]==1){
							output[p][j]=1;
						}else
							flag=1;
					}else
						flag=1;
					if(flag==1)
					break;
				}
				k=p;
				flag=0;
				for(j=p+1;j<n;j++,k++){
					if(input[1][k]==1){
						if(input[0][j]==1){
							output[p][j]=1;
						}else
							flag=1;	
					}else
						flag=1;
					if(flag==1)
					break;
				}	
			}
			flag=0;
			for(k=n-1,j=n-2;j>=0;j--,k--){
				if(input[1][k]==1){
					if(input[0][j]==1){
						output[n-1][j]=1;
					}else
						flag=1;
				}else
					flag=1;
				if(flag==1)
					break;
			}
			
			
		out_files<<"Case #";
		out_files<<i+1;
		out_files<<":";
		out_files<<endl;	
		for(k=0;k<n;k++){
			for(h=0;h<n;h++){
				if(output[k][h]==1){
					out_files<<"Y";
				}else{
					out_files<<"N";
				}
				//cout<<output[k][h]<<" ";
			}out_files<<endl;
		}
	}
	out_files.close();
	return 0;
}
