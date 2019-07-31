/// Time Complexity : O (n^2).
/// Recursive & unstable & not in place.
/// can be implemented iteratively.

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
    swap(a[mni],a[i]);
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

