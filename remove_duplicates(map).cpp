#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	//cin.ignore() is used to ignore or clear one or more characters 
	//from the input buffer.
	cin.ignore();
	while(t--){
	    string s;
	    getline(cin, s);
	    map<char, int> m;
	    for(int i=0; i<s.length(); i++){
	        //whitespace is also a char therefore is included in map
	        if(m.find(s[i])==m.end()){
	            m[s[i]]=i;
	            cout<<s[i];
	        }else{
	            continue;
	        }
	    }
	    cout<<endl;
	}
	return 0;
}