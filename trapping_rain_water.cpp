/* I have used dp. Maintain two dp arrays, one dpleft and another dpright. Let dpleft[i] be the maximum elevation map from 1 to i , and let dpright[i] be maximum elevation map from i to n, Then maximum amount of water you can trap on ith position will be max ( min( left[ i ] , right[ i ] ) - a[ i ] , 0 ) .
The sum for each i from 1 to n gives you answer! */
#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int arr[n+1], dpleft[n+1], dpright[n+1];
	    int sum = 0, maxi = 0;
	    // store in dpleft -> max from 1 to i
	    for(int i=1; i<=n; i++){
	        cin>>arr[i];
	        if(arr[i]>maxi){
	            maxi = arr[i];
	        }
	        dpleft[i] = maxi;
	    }
	    //store in dpright -> max from i to n
	    // basically equivant to accessing max value from peeche se
	    maxi = 0;
	    for(int i = n; i>=1; i--){
	        if(arr[i]> maxi){
	            maxi = arr[i];
	        }
	        dpright[i] = maxi;
	    }
	    for(int i=1; i<=n; i++){
	        sum += max(min(dpleft[i], dpright[i]) - arr[i] ,0);
	        /*
	        7 4 0 9
	           |
	           |
	        |  |
	        |  |
	        |  |
	        || |
	        || |
	        || |
	        ||_|
	        mei suppose at i=3 mei hu(central khamba)
	        at my left there is 7 and 4, I want the max, i.e why dpleft stores max velue
	        similarily, I store max value for its right in dpright
	        Now, out of my left and right khamba, sabse chotta waala decides, 
	        therefore min of dpleft and dpright is taken
	        which is then subtracted from the value of central khamba
	        agar on subtracting, negative no, then consider it 0
	        i=1
	        max(min(7,9) - 7, 0) = 7-7 = 0
	        i=2
	        max(min(7,9) - 4, 0) = 7-4 = 3
	        i=3
	        max(min(7,9) - 0, 0) = 7-0 = 7
	        i=4
	        max(min(7,9) - 9, 0) = 7-9 = -2 = max(-2,0) = 0
	        7+3 = 10
	        */
	    }
	    cout<<sum<<endl;
	}
	return 0;
}