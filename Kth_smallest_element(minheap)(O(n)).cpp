//O(n) approach : min heap
//https://www.techiedelight.com/find-kth-smallest-element-array/
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int func(vector<int> const &v, int k){
    //greater comparator to be used for min heap
    priority_queue<int, std::vector<int>, std::greater<int>> 
      pq(v.begin(), v.end()); //initialzing values of vector to pq
    //popping k-1 times
    while(--k){
        pq.pop();
    }
    return pq.top();
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    vector<int> v(n); //showing segmentation fault if size of vector is 
	    //not being declared during initialisation
	    for(int i=0; i<n; i++){
	        cin>>v[i];
	    }
	    int k; cin>>k;
	    cout<<func(v, k)<<endl;
	}
	return 0;
}