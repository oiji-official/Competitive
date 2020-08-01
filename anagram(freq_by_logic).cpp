//or you can sort and compare
//this is done by frequency calculation+logic
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--){
	    string a; string b;
	    cin>>a>>b;
	    int count=0;
	    if(a.length() != b.length()){
	        cout<<"NO";
	    }else{
	        for(int i=0; i<a.length(); i++){
	            int j=0;
	            while(j<b.length()){
	                if(a[i]==b[j]){
	                    b.erase(b.begin()+j);
	                    count++;
	                    j=b.length();
	                }
	                j++;
	            }
	        }
	        if(count == a.length()){
	            cout<<"YES";
	        }else{
	            cout<<"NO";
	        }
	    }
	    cout<<endl;
	}
	return 0;
} 