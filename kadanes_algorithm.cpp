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
	    int final_max = 0;
	    int till_now_sum = 0;
	    for(int i=0; i<n; i++){
	        till_now_sum = till_now_sum + arr[i];
	        if (till_now_sum < 0){
	            till_now_sum = 0;
	        }
	        if ( final_max < till_now_sum){
	            final_max = till_now_sum;
	        }
	    }
	    if (final_max == 0){
	        sort(arr , arr+n);
	        cout<< arr[n-1]<<endl;
	    }
	    else  cout<<final_max<<endl;
	}
	return 0;
}
