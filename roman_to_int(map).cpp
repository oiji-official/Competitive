#include <bits/stdc++.h>
using namespace std;

int rom_to_int(string s){
    map<char, int> m;
    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;
    int res = 0;
    int i=0;
    if(s.length() == 1){
        res = m[s.at(0)];
    }else{
        for(int i=0; i<s.length(); i++){
            if(m[s[i]] < m[s[i+1]]){
                //L < R
                //res += R - L
                //go to i+2 iteration
                res += m[s[i+1]] - m[s[i]];
                i++; //i++ in for loop will take care
            }else{
                res += m[s[i]];
            }
        }
    }
    return res;
}
int main() {
	int t; cin>>t;
	while(t--){
	    string s; cin>>s;
	    cout<<rom_to_int(s)<<endl;
	}
	return 0;
}