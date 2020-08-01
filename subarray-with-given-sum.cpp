#include <iostream>
using namespace std;
void func(int arr[], int n, int s){
    int currs, i, j;
    for (i=0; i<n; i++){
        currs= arr[i];
        for(j=i+1; j<n+1; j++){
            if (currs==s){
                cout<<i+1<<" "<<j<<endl;
                return;
            }
            if (currs > s || j==n){
                break;
            }
            currs += arr[j];
        }
    }
    cout<< "-1"<< endl;
}
int main() {
	int t; cin>> t; 
	while(t--){
	    int n, s;
	    cin>>n>>s; int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    func(arr, n, s);
	}
	return 0;
}