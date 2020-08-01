#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    //storing in map, not in array because to find if c exists or not
	    //no need to iterate through the entire array
	    //we can directly see if it exists or not through map
	    vector<bool> map(1001, false);
	    int a;
	    for(int i=0; i<n; i++ ){
	        cin>> a;
	        map[a] = true;
	    }
	    bool flag = false;
	    for(int i=1; i<1001; i++){
	        if (flag) {break;}
	        for(int j=i+1; j<1001; j++){
	            if (!map[i] || !map[j]) {continue;}
	            //both map[i] and map[j] should exist 
	            int c = i*i + j*j;
	            int root = (int)pow(c, 0.5);
	            if (c != (root*root)) {continue;}
	            if (map[root]) {
	                flag = true;
	                break;
	            }
	        }
	    }
	    if(flag){
	        cout<<"Yes"<<endl;
	    }else{
	        cout<<"No"<<endl;
	    }
	    
	}
	return 0;
}