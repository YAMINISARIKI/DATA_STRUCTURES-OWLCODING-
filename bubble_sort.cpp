#include<bits/stdc++.h>
using namespace std;
void Bubblesort(int i,int *a,int n)
{
    //base 
    if(n==1)return;
    
    //recursive-1
    // for(int i=0;i<n;i++)
    // {
    //     if([i]>a[i+1])
    //     {
    //         swap(a[i],a[i+1]);
    //     }
    // }
    // Bubblesort(a,n-1);
    
    //recursive
    //basecase 2
    if(i==n-1)
    {
        Bubblesort(0,a,n-1);
        return;
    }
    if(a[i]>a[i+1])
    {
        swap(a[i],a[i+1]);
    }
    Bubblesort(i+1,a,n);
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
    Bubblesort(0,a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
