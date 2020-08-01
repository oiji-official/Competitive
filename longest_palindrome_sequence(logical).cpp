#include<bits/stdc++.h>
using namespace std;

bool checkPalin(string s, int st, int end){
    // very important in terms of implementation
    vector<char> v, k;
    //k and v are vectors made of characters
    for(int i=st; i<=end; i++)
        v.push_back(s[i]);
    k = v;
    //no need to create stack
    //we will use vector reverse function
    reverse(k.begin(), k.end());
    //we can directly write k==v even though they are vector and not strings
    if(k == v)
        return true;
    return false;
}

int main(){
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        if(n == 1)
           cout << s;
        else{
            int max_len = 1, st, end;
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    //(j-i+1) is size of the substring you are checking
                    //if it is greater than max_len and substring is palindrome
                    //then store the i as starting and j as ending index
                    //we will print them
                    if(checkPalin(s, i, j)&& (j-i+1)> max_len){
                        st = i;
                        end = j;
                        max_len = max(j-i+1, max_len);
                    }
                }
            }
            if(max_len != 1)
               for(int i=st; i<=end; i++)
                  cout << s[i];
            else
               cout << s[0];
        }
        cout << endl;
    }
    return 0;
}
