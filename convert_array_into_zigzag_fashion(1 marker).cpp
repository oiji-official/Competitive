#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    for(int i=1; i<n; i++){
	        if (i%2!=0){
	            if(arr[i]<arr[i-1]){
	                swap(arr[i], arr[i-1]);
	            }
	        }else{
	            if(arr[i]>arr[i-1]){
	                swap(arr[i], arr[i-1]);
	            }
	        }
	    }
	    for(int i=0; i<n; i++){
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}