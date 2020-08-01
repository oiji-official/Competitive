#include <bits/stdc++.h>
using namespace std;
//(1)
/* EASY WAY
int main() {
	int t; cin>>t;
	while(t--){
	    cin.ignore();
	    string s1, s2;
	    cin>>s1>>s2;
	    
	    string left = s2, right=s2;
        rotate(left.begin(),left.begin()+2,left.end());
        rotate(right.begin(),right.end()-2,right.end());
	    
	    if(left == s1 || right== s1){
	        cout<<"1"<<endl;
	    }else{
	        cout<<"0"<<endl;
	    }
	    
	}
	return 0;
}
*/

//(2)
int main() {
	int t; cin>>t;
	while(t--){
	    cin.ignore();
	    string s1, s2;
	    cin>>s1>>s2;
	    int n= s2.length();
	    //THIS IS THE WRONG IMPLEMENTATION
	    /*if(s2.substr(2, n-1) + s2.substr(0,1) == s1){
	        cout<<"1"<<endl;
	    }
	    else if(s2.substr(n-2, n-1) + s2.substr(0, n-3) == s1){
	        cout<<"1"<<endl;
	    }else{
	        cout<<"0"<<endl;
	    }
	    */
	    //CORRECT IMPLEMENTION
	    string clock_rot = ""; 
        string anticlock_rot = ""; 
  
        // Initialize string as anti-clockwise rotation 
        anticlock_rot = anticlock_rot + s2.substr(n-2, 2) + s2.substr(0, n-2) ; 
  
        // Initialize string as clock wise rotation 
       clock_rot = clock_rot + s2.substr(2) + s2.substr(0, 2) ; 
  
        // check if any of them is equal to string1 
       if (s1.compare(clock_rot) == 0 || s1.compare(anticlock_rot) == 0){
           cout<<"1"<<endl;
       }else{
           cout<<"0"<<endl;
       }
 	}
	return 0;
}
