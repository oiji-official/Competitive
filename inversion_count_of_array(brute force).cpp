#include <iostream>
using namespace std;

long long int func(int *arr, int n){
    int count = 0;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if (arr[i]>arr[j]){
                count++;
            }
        }
    }
    return count;
}
int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>> arr[i];
	    }
	    long long int count = func(arr, n);
	    cout<<count<<endl;
	}
	return 0;
}