#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ifstream in_files;
	ofstream out_files;
	in_files.open("d1_input.txt");
	
	if(in_files.fail()){
		cout<<"error uploading"<<endl;
		exit(1);
	}
	out_files.open("d1_output.txt");
	long long int T,t,n,m,a,p,q,result,min,idx,M;
	in_files >> T;	
	for(t=1;t<=T;t++){
		result = 0;
		in_files >> n;
		in_files >> m;
		in_files << n;
		in_files << m;
		M=m;
		long long int arr[n];
		for(a=0;a<n;a++)
			in_files >> arr[a];
		if(m>=n){
			in_files <<"Case #"<<t<<":"<<result<<endl;
		}else{
			int flag=0;
			for(a=0;a<n;){
				min = INT_MAX;
				idx=-1;
				for(p=a,q=m+a;p<=q;p++){
					if(arr[p]<min && arr[p]!=0){
						min = arr[p];
						idx = p;
					}
				}
				if(idx==-1){
					flag=1;
					break;	
				}
				m = m-(idx-a);
				m = m+M;
				a=idx;
				result+=min;
			}
			if(flag==1)	
				in_files <<"Case #"<<t<<":-1"<<endl;
			else 
				in_files <<"Case #"<<t<<":"<<result<<endl;
		}
	}
	return 0;
}
