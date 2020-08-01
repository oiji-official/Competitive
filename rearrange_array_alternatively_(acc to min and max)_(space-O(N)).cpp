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
	    int a[n]; int count =0;
	    
	    for(int i=0, j=n-1, k =0; i<=j; k++ ){
	        if(count%2 == 0){
	            count++;
	            a[k] = arr[j];
	            j--;
	        }else{
	            count++;
	            a[k] = arr[i];
	            i++;
	        }
	    }
	    
	    for(int t=0; t<n; t++){
	        cout<<a[t]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}