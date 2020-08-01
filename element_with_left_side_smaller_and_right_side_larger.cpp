//first element, arr[0] is greater than its left and 
//arr[n-1] is lesser than its right
//see the dry run of 4 3 2 7 8 9
//left:                4 4 7 8
//right:               2 2 7 8
//left[i] == right[i] means that at i ke left ka max mei hi hu and i ke right ka min mei hi hu

#include <iostream>
using namespace std;

int func(int *arr, int n){
    int left[n] = {0};
    int right[n] = {0};
    int maxi = arr[0];
    int mini = arr[n-1];
    for(int i=1; i<n; i++){
        maxi = max(maxi, arr[i]);
        left[i] = maxi;
    }
    for(int i=n-1; i>0; i--){
        mini = min(mini, arr[i]);
        right[i] = mini;
    }
    for(int i=1; i<n-1; i++){
        if (left[i] == right[i]){
            return left[i];
        }
    }
    return -1;
}
int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    cout<<func(arr, n)<<endl;
	}
	return 0;
}

