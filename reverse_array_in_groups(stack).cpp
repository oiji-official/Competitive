#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t; cin>>t;
	while(t--){
	    int n; cin>>n; int arr[n];
	    int k; cin>>k;
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    stack<int> s;
	    
	    for(int i=0; i<n; i++){
	        if(s.size()<k){
	            s.push(arr[i]);
	        }else{
	            while(!s.empty()){
	                cout<<s.top()<<" ";
	                s.pop();
	            }
	            s.push(arr[i]);
	        }
	    }
	    while(!s.empty()){
	        cout<<s.top()<<" ";
	        s.pop();
	    }
	    cout<<endl;
	}
	return 0;
}