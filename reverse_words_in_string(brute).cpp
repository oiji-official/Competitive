#include <iostream>
#include <string>
using namespace std;

void func(string s, int count){
    if(count ==0){
        for(int i=0; i<s.length(); i++){
            cout<<s[i];
        }
        return;
    }else{
        int start = s.rfind('.');
        for(int i=start+1; i<s.length(); i++){
            cout<<s[i];
        }
        if(count!=0){
            cout<<'.';
        }
        s.erase(start);
        func(s, count-1);
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t; cin>>t;
	while(t--){
	    string s; cin>>s;
	    int count =0;
	    for(int i=0; i<s.length(); i++){
	        if(s[i]=='.'){
	            count++;
	        }
	    }
	    func(s, count);
	    cout<<endl;
	}
	return 0;
}