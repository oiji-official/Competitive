#include <iostream>
using namespace std;

int func(int *arr, int n, int sum){
    int leftsum = 0;
    for(int i=1; i<=n; i++){
        sum-=arr[i];
        //sum now acts as rightsum
        if (leftsum == sum){
            return i;
        }
        leftsum+= arr[i];
    }
    return -1;
}
int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int arr[n+1]; int sum = 0;
	    for(int i=1; i<=n; i++){
	        cin>>arr[i];
	        sum+=arr[i];
	    }
	    if(n<2){
	        cout<<"1"<<endl;
	    }else{
	        cout<<func(arr, n, sum)<<endl;
	    }
	}
	return 0;
}