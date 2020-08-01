//freq implemented by map
#include<bits/stdc++.h>
using namespace std;
bool mapfunction(string a, string b){
    int a_len = a.size();
    int b_len = b.size();
    if (a_len!=b_len){
        return false;
    }
    map<char, int> m;
    
    //map will be of string a
    for(int i=0; i<a_len; i++){
        m[a[i]]++;
    }
    
    map<char, int>::iterator it;
    
    for(int i=0; i<b_len; i++){
        if(m.find(b[i])!=m.end()){
            //char exists in b but not in a
            m[b[i]]--;
        }else{
            //char present in a but not in b
            return false;
        }
    }
    //for scenario that a specific char exists in more quantity in a than b
    //or vice versa
    //we need to see if all char in map are 0
    for(it=m.begin(); it!=m.end(); it++){
        if(it->second !=0){
            return false;
        }
    }
    return true;
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(false);
    int t; cin>>t;
    while(t--){
        string a, b;
        cin>>a>>b;
        if(mapfunction(a,b)){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        cout<<endl;
    }
}