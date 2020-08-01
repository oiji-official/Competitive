

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(int *left, int *right, int *A, int nl, int nr, int n){
    int i=0, j=0, k=0;
    while(i<nl && j<nr){
        if (left[i]<= right[j]){
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
    while(j<nr){
        A[k] = right[j];
        j++; k++;
    }
}
void mergesort(int *A, int n){
    if (n<2) return;
    int mid = n/2;
    int *left = new int[mid];
    int *right = new int[n - mid];
    for ( int i=0; i<mid; i++){
        left[i] = A[i];
    }
    for(int i=mid; i<n; i++){
        right[i - mid]= A[i];
    }
    mergesort(left, mid);
    mergesort(right, n-mid);
    merge(left, right, A, mid, n-mid, n);
    delete(left);
    delete(right);
}
int main()
{
    int n; cin>>n;
    int *A = new int[n];
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    mergesort(A, n);
    for(int i=0; i<n; i++){
        cout<< A[i]<<" ";
    }

    return 0;
}
