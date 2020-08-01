#include <bits/stdc++.h>
using namespace std;
int func(){
        int n; cin>>n;
	    int arr[n-1]; 
	    for(int i=0; i<n-1; i++){
	        cin>>arr[i];
	    }
	    sort(arr, arr+n-1);
	    int total = (n ) * (n + 1) / 2; 
        for (int i = 0; i < n-1; i++) 
            total -= arr[i]; 
        return total; 
	    
}
int main() {
	int t; cin>>t;
	while(t--){
	    cout<< func()<<endl;
	}
	return 0;
}