#include <bits/stdc++.h>
using namespace std;
//stoi takes string and returns value(basically converts string to int)

/* 3 30 34 5 9 : s1=3 , s2=30 : 330 > 303 : true : no sorting
   330 34 5 9 : s1=330 , s2=34 :                 : sorting
   34330 5 9 : s1=34330 , s2= 5 :                : sorting
   534330 9 : s2=534330 , s2=9 :                 : sorting
   9534330
*/

/*NOTE: Individual identity is not compromised
  i.e finally vector has values of 9 5 34 3 30
  hence, 330 in 330 34 5 9 is not together as a string
*/

bool compare(string s1, string s2){
    return (stoi(s1+s2) > stoi(s2+s1));
    /*if true, then RETURN returns true
      therefore compare in sort gets True
      hence no sorting occurs
      if false, then sorting occurs
      https://www.geeksforgeeks.org/sort-c-stl/   (MUST SEE)
    */
    // sort is implemented by quicksort in STL
}
int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    vector<string> v(n, "");
	    for(int i=0; i<n; i++){
	        cin>>v[i];
	    }
	    sort(v.begin(), v.end(), compare);
	    for(int i=0; i<n; i++){
	        cout<<v[i];
	    }
	    cout<<endl;
	}
	return 0;
}
/* agar vector mei string store kiya hai 
   and we need to access first letter of every string stored in vector
   we can do so by v[i][0]
   Eg: vector<string> v;
       v.push_back("956");
       cout<<v[0][1];
*/