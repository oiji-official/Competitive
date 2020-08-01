#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    vector<string> v;
	    int x = INT_MAX;
	    for(int i=0; i<n; i++){
	        string s; cin>>s;
	        if(x > s.size()){
	            x = s.size();
	        }
	        v.push_back(s);
	    }
	    string s = ""; int flag = 0;
	    int count = -1;
	    for(int i=0; i<x; i++){
	        for(int j=0; j<v.size(); j++){
	            if(v[j][i] != v[0][i]){
	                //like in geek'1's geek'2' geet
	                //this will come in k'1' and  t
	                flag = 1;
	                break;
	            }
	        }
	        //break will make cursor come here and start next i
	        if(flag){
	            break;
	            //this will take cursor out of outer loop as well
	        }
	        count++;
	        s+=v[0][i];
	    }
	    if(count!= -1){
	        cout<<s<<endl;
	    }else{
	        cout<<count<<endl;
	    }
	}
	return 0;
}