#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &left, vector<int> &right, vector<int> &A){
    int nl = left.size();
    int nr = right.size();
    int i=0, j=0, k=0;
    while(i<nl && j < nr){
        if (left[i] <= right[j]){
            A[k] = left[i];
            i++;
        }else{
            A[k] = right[j];
            j++;
        }
        k++;
    }
    while(i<nl){
        A[k] = left[i];
        i++; k++;
    }
    while (j<nr){
        A[k] = right[j];
        j++; k++;
    }
}
void mergesort(vector<int> &A){
    int n = A.size();
    if (n < 2) return;
    int mid = n/2;
    vector<int> left;
    vector<int> right;
    for(int i=0; i<mid; i++){
        left.push_back(A[i]);
    }
    for(int i=mid; i<n; i++){
        right.push_back(A[i]);
    }
    mergesort(left);
    mergesort(right);
    merge(left, right, A);
}
int main(){
    int n; cin>>n; 
    vector<int> A;
    int a;
    for(int i=0; i<n; i++){
        cin>>a;
        A.push_back(a);
    }
    mergesort(A);
    for(vector<int> :: iterator it = A.begin() ; it != A.end(); it++){
        cout<< *it<<" ";
    }
    return 0;
}