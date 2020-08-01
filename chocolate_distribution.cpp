/* ios_base::sync_with_stdio(false);
It toggles on or off the synchronization of all the C++ standard streams with their corresponding standard C streams if it is called before the program performs its first input or output operation. Adding ios_base::sync_with_stdio (false); (which is true by default) before any I/O operation avoids this synchronization. It is a static member of function of std::ios_base.

cin.tie(NULL);
tie() is a method which simply guarantees the flushing of std::cout before std::cin accepts an input. This is useful for interactive console programs which require the console to be updated constantly but also slows down the program for large I/O. The NULL part just returns a NULL pointer.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    //https://www.geeksforgeeks.org/fast-io-for-competitive-programming/
    //cin and cout slower than printf and scanf
    //endl forces a flushing stream, hence slower than \n
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t; cin>>t;
	while(t--){
	    long long int n; cin>>n; 
	    long long int arr[n];
	    for(long long int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    long long int m; cin>>m;
	    sort(arr, arr+n);
	    long long int min = INT_MAX;
	    for(long long int i=0; i<n-(m-1); i++){
	        if(arr[i+m-1] - arr[i] < min){
	            min= arr[i+m-1] - arr[i];
	        }
	    }
	    cout<<min<<endl;
	}
	return 0;
}