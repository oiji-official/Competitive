#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int r,c; cin>>r>>c;
	    int arr[r][c];
	    int total = r*c;
	    for(int i=0; i<r; i++){
	        for(int j=0; j<c; j++){
	            cin>>arr[i][j];
	        }
	    }
	    int rs=0, re=r-1, cs=0, ce=c-1;
	    while(rs<=re && cs<= ce){
	        for(int i=cs; i<=ce && total>0; i++){
	            cout<<arr[rs][i]<<" ";
	            total--;
	        }
	        rs++;
	        for(int i=rs; i<=re && total>0; i++){
	            cout<<arr[i][ce]<<" ";
	            total--;
	        }
	        ce--;
	        for(int i=ce; i>=cs && total>0; i--){
	            cout<<arr[re][i]<<" ";
	            total--;
	        }
	        re--;
	        for(int i=re; i>=rs && total>0; i--){
	            cout<<arr[i][cs]<<" ";
	            total--;
	        }
	        cs++;
	    }
	    cout<<endl;
	}
	return 0;
}