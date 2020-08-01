//can do int also instead of long long int
//long long int used because test case had too many numbers
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    long long int n; cin>>n;
	    long long int arr[n];
	    for(long long int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    
	    long long int maxindex= n-1;
	    long long int minindex=0;
	    long long int z = arr[n-1]+ 1;
	    for(long long int i=0; i<n; i++){
	        if  (i%2==0){
	            arr[i]+= (arr[maxindex]%z) *z;
	            maxindex--;
	        }else{
	            arr[i]+= (arr[minindex]%z) *z;
	            minindex++;
	        }
	    }
	    
	    for(long long int t=0; t<n; t++){
	        cout<<arr[t]/z<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}