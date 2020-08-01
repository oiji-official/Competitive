//O(nlogn) time [because in built sort does sorting through quick sort]
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    int m; cin>>m; 
	    sort(arr,arr+n);
	    cout<<arr[m-1]<<endl;
	}
	return 0;
}