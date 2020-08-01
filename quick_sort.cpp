#include<iostream>
using namespace std;

int partition(int *A, int start, int end){
    int pivot= A[end];
    int pindex = start;
    for(int i = start; i<end; i++){
        if (A[i] <= pivot){
            swap(A[pindex], A[i]);
            pindex++;
        }
    }
    swap(A[pindex], A[end]);
    return pindex;
}
void quicksort(int *A, int start, int end){
    if (start>= end) return;
    int partitionindex = partition(A, start, end);
    quicksort(A, start, partitionindex - 1);
    quicksort(A, partitionindex+1, end);
}
int main(){
    int n; cin>>n;
    int *A = new int[n];
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    quicksort(A, 0, n-1);
    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }
    return 0;
}