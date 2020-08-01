#include <bits/stdc++.h>
using namespace std;

vector<string> ans;
void func(string s, int start, int end){
    if(start==end){
        ans.push_back(s);
    }else{
        for(int i = start; i<=end; i++){
            swap(s[start], s[i]);
            func(s, start+1, end);
            swap(s[start], s[i]);
        } 
    }
}
int main() {
	int t; cin>>t;
	while(t--){
	    string s; cin>>s;
	    func(s, 0, s.size()-1);
	    sort(ans.begin(), ans.end());
	    for(int i=0; i<ans.size(); i++){
	        cout<< ans[i] <<" ";
	    }
	    ans.clear();
	    cout<<endl;
	}
	return 0;
}