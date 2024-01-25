//Time complexity : O(n*log n)
//space complexity : O(n)
#include<bits/stdc++.h>
using namespace std;
void Merge(int *a,int l,int mid,int h)
{
    int i = l;
    int j = mid+1;
    int k = l;
    int temp[h+1];
    while(i<=mid and j<=h)
    {
        if(a[i]<a[j])
        {
            temp[k++]= a[i++];
        }
        else
        {
            temp[k++] = a[j++];
        }
    }
    
    while(i<=mid)
    {
        temp[k++] = a[i++];
    }
    while(j<=h)
    {
        temp[k++] = a[j++];
    }
    //copying all elements of temp into original array
    for(int i=l;i<=h;i++)
    {
        a[i] = temp[i];
    }
}
void mergesort(int *a,int l,int h)
{
    if(l>=h)return;
    int mid = l+(h-l)/2;
    mergesort(a,l,mid);
    mergesort(a,mid+1,h);
    Merge(a,l,mid,h);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    mergesort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
