void answer(string s,unsigned int n){
	
	istringstream ss(s); 
  
    // Traverse through all words 
    do { 
        // Read a word 
        string word; 
        ss >> word; 
  
        // Print the read word 
        w.push_back(word); 
  
        // While there is more to read 
    } while (ss);
	/*for(unsigned int i=0;i<w.size();i++){
		cout<<w[i]<<endl;
	} 
	return "end";*/
}if(size_t index = w[i].find(dam[j])){
				if(z.find(w[i])==s.end()){
					s.insert(w[i]);
				}
			}
			
			set<string> z;
string match(){
	for(unsigned int i=0;i<dam.size();i++){
		string p = dam[i];
		int flag=0;
		for(unsigned int j=0;j<p.size();j++){
			for(unsigned int k=0;k<s.size();k++){
				if(s[k]==p[j]){
					z.insert(p);
					flag=1;
				}
				if(flag==1)
					break;	
			}
			if(flag==1)
				break;
		}
	}
	dam.clear();
	set<string>::iterator it = z.begin();
	string ans = *it;
	s.clear();
	return ans;
}

void permute(string a, int l, int r){  
     
    if (l == r)  
        ans = check(a);  
    else
    {  
        // Permutations made  
        for (int i = l; i <= r; i++)  
        {  
  
            // Swapping done  
            swap(a[l], a[i]);  
  
            // Recursion called  
            permute(a, l+1, r);  
  
            //backtrack  
            swap(a[l], a[i]);  
        }  
    }  
}

if(ans.size()==0)
		return a;
	vector<string> q;
	q.push_back(a);
	q.push_back(ans);
	sort(q.begin(),q.end());
	string z = q[0];
	q.clear();
	return z;

