// time complexity: O(n) (build Heap) + O(m * log(n))
// pace complexity: O(1)
// used: minheap
// used: array
#include <bits/stdc++.h>

using namespace std;


void heapify(int *arr, int n, int i){
    
  int leftchild = 2*i + 1;
    
  int rightchild = 2*i + 2;
    
  int smallest = i;
    
    
  if (leftchild<n && arr[i] > arr[leftchild]){
        
     smallest = leftchild;
    
  }
    
  smallest = (rightchild<n && arr[rightchild] < arr[smallest])? rightchild : smallest;
    
  if (smallest !=i ){
        
     swap(arr[smallest], arr[i]);
        
     heapify(arr, n, smallest);
    
  }
    

}

/*void buildheap(int * arr, int n){
    
   for(int i=(n/2) - 1; i>=0; i--){
        
      heapify(arr, n, i);
    
   }

} */

int main() {
    
  int t; cin>>t;
    
  while(t--){
        
     int n; cin>>n;
        
     int m; cin>>m;
        
     //vector<int> arr1, arr2;
        
     int arr1[n]; int arr2[m];
        
     //int *arr1 = new int[n];
        
     //int *arr2 = new int[m];
        
     for(int i=0; i<n; i++){
           
        cin>>arr1[i];
        
     }
        
     for(int j=0; j<m; j++){
            
        cin>>arr2[j];
        
     }
        
     //buildheap(arr2, m);
        
        
     for(int i=0; i<n; i++){
            
          if (arr1[i] > arr2[0]){
                
          swap(arr1[i], arr2[0]);
                
          heapify (arr2, m, 0);
            
      }
        
  }
        
  sort(arr2, arr2 + m);
        
        
  for(int i=0; i<n; i++){
            
     cout<<arr1[i]<<" ";
        
  }
        
  for(int j=0; j<m; j++){
            
     cout<<arr2[j]<<" ";
        
  }
        
  cout<<endl;
    
 }
	
 return 0;

}