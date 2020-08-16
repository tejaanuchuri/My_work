#include<iostream>
#include<vector>
#include<fstream>
using namespace std;
int main(){
	ifstream in_files;
	ofstream out_files;
	in_files.open("perimetric_chapter_1_validation_input (1).txt");
	
	if(in_files.fail()){
		cout<<"error uploading"<<endl;
		exit(1);
	}
	out_files.open("output.txt");
	unsigned long long int T,t,n,k,w,A,B,C,D,a,b,c,d,i,m,ans,pod,p,q,x,y,cur,res,prev;
	in_files>>T;
	for(t=1;t<=T;t++){
		in_files>>n>>k>>w;
		vector<unsigned long long int> l;
		vector<unsigned long long int> h;
		for(i=0;i<k;i++){
			in_files>>m;
			l.push_back(m);
		}
		in_files>>A>>B>>C>>D;
		
		for(i=0;i<k;i++){
			in_files>>m;
			h.push_back(m);
		}
		in_files>>a>>b>>c>>d;
		
		unsigned long long int ans[n];
		vector<unsigned long long int> v;
		v.clear();
		
		/*cout<<"------print------"<<endl;
		for(i=0;i<k;i++){
			cout<<l[i]<<" ";
		}cout<<endl;
		for(i=0;i<k;i++){
			cout<<h[i]<<" ";
		}cout<<endl;
		cout<<"------print-end------"<<endl;*/
		
		pod=0;
		x=l[0];
		y=h[0];
		for(i=0;i<n;i++){
			if(i>=k){
				p = ((A*l[i-2]+B*l[i-1]+C)%D)+1;
				q = ((a*h[i-2]+b*h[i-1]+c)%d)+1;
				l.push_back(p);
				h.push_back(q);
			}else{
				p = l[i];
				q = h[i];	
			}
			if(p<x)
				x = p;
			if(q>y)
				y = q;
			
			if(i>0){
				if((p-l[i-1])<=w){
					//cout<<"x: "<<x<<" y: "<<y<<" p: "<<p<<" q: "<<q<<endl;
					cur = (2*((p+w-x) + (y)));
					if(v.size()>0)
					ans[i]=(cur+v[v.size()-1]);
					else
					ans[i]=cur;
					pod = cur;
				}
				else{
					v.push_back(pod);
					cur = (2*(w+q));
					x = l[i];
					y = h[i];
					//cout<<"x: "<<x<<" y: "<<y<<" p: "<<p<<" q: "<<q<<endl;
					pod = cur+v[v.size()-1];
					ans[i]= (cur+v[v.size()-1]);
				}
			}else{
				//cout<<"x: "<<x<<" y: "<<y<<" p: "<<p<<" q: "<<q<<endl;
				pod = ((2*((p+w-x) + (y))));
				ans[i]=(pod);
			}
			//cout<<"product"<<pod<<endl;	
		}//cout<<"------------"<<endl;
		res=1;
		for(unsigned long long int j=0;j<n;j++){
			//cout<<ans[j]<<" ";
			res = (res*ans[j])%1000000007;
		}//cout<<endl<<"------------"<<endl;
		out_files<<"Case #"<<t<<": "<<res<<endl;
		
		l.clear();
		h.clear();
	}
	return 0;
}
