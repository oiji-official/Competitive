// time complexity: O(n) (build Heap) + O(m * log(n))
// pace complexity: O(1)
// used: minheap
// used: VECTOR
#include <bits/stdc++.h>
using namespace std;
//PASS &ARR2 IN HEAPIFY BECAUSE YOU WANT TO CHANGE IN ARR2 ONLY, NOT IN ITS COPY
void heapify(vector<int> &arr2, int m, int i){
    
  int leftchild = 2*i + 1;
    
  int rightchild = 2*i + 2;
    
  int smallest = i;
    
    
  if (leftchild<m && arr2[i] > arr2[leftchild]){
        
     smallest = leftchild;
    
  }
    
  smallest = (rightchild<m && arr2[rightchild] < arr2[smallest])? rightchild : smallest;
  int temp;   
  if (smallest !=i ){
    
     temp = arr2[i];
     arr2[i] = arr2[smallest];
     arr2[smallest] = temp;
     heapify(arr2, m, smallest);
    
  }
    

}

void buildheap(vector<int> &arr2, int n){
    
   for(int i=(n/2) - 1; i>=0; i--){
        
      heapify(arr2, n, i);
    
   }

} 

int main() {
    
  int t; cin>>t;
    
  while(t--){
    int n; cin>>n;
    int m; cin>>m;
    vector<int> arr1;
    vector<int> arr2;
    int a, b;
        
    for(int i=0; i<n; i++){
        cin>>a;
        arr1.push_back(a);
    }
    for(int j=0; j<m; j++){
        cin>>b;
        arr2.push_back(b);
    }
    buildheap(arr2, m);
    int temp;
    for(int i=0; i<n; i++){
            
          if (arr1[i] > arr2[0]){
            temp = arr1[i];
            arr1[i] = arr2[0];
            arr2[0] = temp;
            heapify (arr2, m, 0);
            }
    }
    sort(arr2.begin(), arr2.end());
        
    for(vector<int> :: iterator it = arr1.begin(); it != arr1.end(); it++){
        cout<<*it<<" ";
    }
    for(vector<int> :: iterator it = arr2.begin(); it != arr2.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
  }
	 return 0;

}