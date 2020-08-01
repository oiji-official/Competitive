// need to pass &A instead of Aas parameter because we do not want copies of the vector
#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &A, int start, int end){
    int pivot= A[end];
    int temp;
    int pindex = start;
    for(int i = start; i<end; i++){
        if (A[i] <= pivot){
            temp = A[i];
            A[i] = A[pindex];
            A[pindex] = temp;
            pindex++;
        }
    }
    temp = A[end];
    A[end] = A[pindex];
    A[pindex] = temp;
    return pindex;
}
void quicksort(vector<int> &A, int start, int end){
    if (start>= end) return;
    int partitionindex = partition(A, start, end);
    quicksort(A, start, partitionindex - 1);
    quicksort(A, partitionindex+1, end);
}
int main(){
    int n; cin>>n;
    vector<int> A;
    int a;
    for(int i=0; i<n; i++){
        cin>>a;
        A.push_back(a);
    }
    quicksort(A, 0, A.size() -1);
    for(vector<int>::iterator it = A.begin(); it != A.end(); it++) {
    cout << *it << " ";
    }
    return 0;
}