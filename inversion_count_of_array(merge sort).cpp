#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll Merge(ll arr[],int s,int mid,int e)
{
    
    int i=s;int j=mid+1;
    int k=s;ll temp[s+e];
    ll count=0;
    while(i<=mid && j<=e)
    {
        if(arr[i]>arr[j])
        {
            //as all elements to the right of i are greater than arr[j]
            count+=mid-i+1;
            temp[k++]=arr[j++];
        }
        else{
           temp[k++]=arr[i++];
        }
    }
    while(i<=mid){
        temp[k++]=arr[i++];
    }
    while(j<=e){
        temp[k++]=arr[j++];
    }
    for(int i=s;i<=e;i++)
    {
        arr[i]=temp[i];
    }
    return count;
}

void MergeSort(ll arr[],ll &sum,int s,int e)
{
    if(s<e)
    {
        int mid=(s+e)/2;
        MergeSort(arr,sum,s,mid);
        MergeSort(arr,sum,mid+1,e);
        sum+=Merge(arr,s,mid,e);
    }
}

int main() 
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++)
        {
             cin>>arr[i];
        }
        ll sum=0;
        MergeSort(arr,sum,0,n-1);
        cout<<sum<<endl;
       
    }
    return 0;
}