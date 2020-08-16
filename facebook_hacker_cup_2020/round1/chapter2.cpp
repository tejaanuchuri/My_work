#include<iostream>
#include<vector>
using namespace std;
int main(){
	long long int t,n,k,w,A,B,C,D,Aw,Bw,Cw,Dw,a,b,c,d,i,m,ans,pod,p,q,r,x,y,cur,res,prev;
	cin>>t;
	while(t--){
		cin>>n>>k;
		vector<long long int> l;
		vector<long long int> h;
		vector<long long int> w;
		for(i=0;i<k;i++){
			cin>>m;
			l.push_back(m);
		}
		cin>>A>>B>>C>>D;
		
		for(i=0;i<k;i++){
			cin>>m;
			w.push_back(m);
		}
		cin>>Aw>>Bw>>Cw>>Dw;
		for(i=0;i<k;i++){
			cin>>m;
			h.push_back(m);
		}
		cin>>a>>b>>c>>d;
		
		vector<long long int> ans;
		vector<long long int> v;
		ans.clear();
		v.clear();
		
		cout<<"------print------"<<endl;
		for(i=0;i<k;i++){
			cout<<l[i]<<" ";
		}cout<<endl;
		for(i=0;i<k;i++){
			cout<<h[i]<<" ";
		}cout<<endl;
		cout<<"------print-end------"<<endl;
		
		pod=0;
		x=l[0];
		y=h[0];
		for(i=0;i<n;i++){
			if(i>=k){
				p = ((A*l[i-2]+B*l[i-1]+C)%D)+1;
				q = ((a*h[i-2]+b*h[i-1]+c)%d)+1;
				r = ((Aw*w[i-2]+Bw*w[i-1]+Cw)%Dw)+1; 
				l.push_back(p);
				h.push_back(q);
				w.push_back(r);
			}else{
				p = l[i];
				q = h[i];
				r = w[i];	
			}
			if(p<x)
				x = p;
			if(q>y)
				y = q;
			
			if(i>0){
				if((p-l[i-1])<=r){
					cout<<"x: "<<x<<" y: "<<y<<" p: "<<p<<" q: "<<q<<endl;
					cur = (2*((p+r-x) + (y)));
					if(v.size()>0)
					ans.push_back(cur+v[v.size()-1]);
					else
					ans.push_back(cur);
					pod = cur;
				}
				else{
					v.push_back(pod);
					cur = (2*(r+q));
					x = l[i];
					y = h[i];
					cout<<"x: "<<x<<" y: "<<y<<" p: "<<p<<" q: "<<q<<endl;
					pod = cur+v[v.size()-1];
					ans.push_back(cur+v[v.size()-1]);
				}
			}else{
				cout<<"x: "<<x<<" y: "<<y<<" p: "<<p<<" q: "<<q<<endl;
				pod = ((2*((p+r-x) + (y))));
				ans.push_back(pod);
			}
			//cout<<"product"<<pod<<endl;	
		}cout<<"------------"<<endl;
		res=1;
		for(long long int j=0;j<ans.size();j++){
			cout<<ans[j]<<" ";
			res = (res*ans[j])%1000000007;
		}cout<<endl<<"------------"<<endl;
		cout<<"result => "<<(res%1000000007)<<endl;
		
		l.clear();
		h.clear();
		w.clear();
	}
	return 0;
}
