/// Time Complexity : O (n^3).
/// Recursive & stable & not in place.
/// can be implemented iteratively.

/// idea : First minimum element is 1, now instead
///        of swapping. Insert 1 in its correct place
///        and pushing every element one step forward

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void Selection_sort(ll a[],ll n,ll i)
{
    if(i>n-1)
        return;
    ll mni = i;
    for(ll j=i+1; j<n; j++)
    {
        if(a[j]<a[mni])
            mni = j;
    }

    // Move minimum element at current i.
    int key = a[mni];
    while (mni > i)
    {
        a[mni] = a[mni - 1];
        mni--;
    }
    a[i] = key;
    Selection_sort(a,n,i+1);
}

int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++)
        cin>>a[i];
    Selection_sort(a,n,0);
    cout<<"After Selection Sort : "<<endl;
    for(ll i=0; i<n; i++)
        cout<<a[i]<<" ";
    return 0;
}
