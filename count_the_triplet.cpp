#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    sort(arr, arr+n);
	    int count=0;
	    for(int end = n-1; end>=2; end--){
	        for(int p1 = 0, p2 = end - 1; p1< p2; ){
	            if(arr[p1] + arr[p2] == arr[end]){
	                count+=1; p1=p1+1; p2-=1;
	            }
	            if(arr[p1] + arr[p2] < arr[end]){
	                p1+=1;
	            }
	            if(arr[p1] + arr[p2] > arr[end]){
	                p2-=1;
	            }
	        }
	    }
	    if (count!= 0)
	      cout<<count<<endl;
	    else cout<<"-1"<<endl;
	}
	return 0;
}