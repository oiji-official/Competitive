#include<bits/stdc++.h>
using namespace std;

// Map for ordered strings in order
map<string, int> mp;

void printHelper(string str, string choosen){
    //cout<<"str "<<str<<"choosen is "<< choosen <<endl;
    if(str.empty()){
        // All characters are choosen
        //cout<<"str khaali hai"<<endl;
        mp[choosen]++;
    }
    else{
        // Choose / Erase / Explore / Unchoose
        for(int i=0; i<str.length(); i++){
            // Choose
            char c = str[i];
            //cout<<"abhi i="<<i<<"and c is "<<c<<endl;
            choosen += c;
            //cout<<"choosen is now "<<choosen<<endl;
            // Erase
            str.erase(i, 1);
            // Explore
            printHelper(str, choosen);
            // Unchoose
            str.insert(i, 1, c);
            choosen.erase(choosen.length() - 1);
        }
    }
}

void print(string str){
    // Let the helper function do everything
    printHelper(str, "");
}

int main() {
    int t;    cin>>t;
    while(t--){
        string str;
        cin>>str;
        print(str);
        // Printing in order
        for(auto x : mp){cout<<x.first<<" ";}
        // Clear the map for next string
        mp.clear();
        cout<<endl;
    }
    return 0;
}

