//------------------------------------------------------------------------------------------------------
/// First assume two separate part sorted & unsorted. pock one from unsorted part and shift all values
/// greater than picked one to one index right. finally put the picked one to the right position.
/// Time Complexity : O(n^2).
/// Space Complexity : O(n).
//------------------------------------------------------------------------------------------------------

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

/// iterative.
/*void insertion_sort(ll a[],ll n)
{
    ll v,j;
    for(ll i=1; i<n; i++)
    {
        v = a[i];
        j = i;
        while(j>0 && a[j-1]>v)
        {
            a[j] = a[j-1];
            j--;
        }
        a[j] = v;
    }
}*/

/// Recursive.
void insertion_sort(ll a[],ll n,ll i)
{
    if(i>=n)
        return;
    ll v = a[i];
    ll j = i;
    while(j>0 && a[j-1]>v)
    {
        a[j] = a[j-1];
        j--;
    }
    a[j] = v;
    insertion_sort(a,n,i+1);
}

int main()
{
    ll arr[100000],n;
    cout<<"How many numbers ? : ";
    cin>>n;
    for(ll i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    insertion_sort(arr,n,1); /// take the array name , staring and end points(range where to sort).
    cout<<"Values after sorting :"<<endl;
    for(ll i=0; i<n; i++)
        cout<<arr[i]<<" ";
    return 0;
}
