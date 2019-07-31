//-------------------------------------------------------------------------------------------------------------------------------------
/// quick sort implementation using divide & conquer ( recursion ) technique.
/// Time Complexity:  O(n log n) in Average case , O(n^2) in worst case. Practically O(n log n) in randomized pivot selection approach.
/// Space Complexity:  O(log n) in average, O(n) in worst case.
//-------------------------------------------------------------------------------------------------------------------------------------

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll Partition(ll a[],ll s,ll f)
{
    ll pivot=a[f];
    ll pindex=s;
    for(ll i=s; i<=f-1; i++)
    {
        if(a[i]<=pivot)
        {
            swap(a[i],a[pindex]);
            pindex++;
        }
    }
    swap(a[pindex],a[f]);
    return pindex;
}

ll Randomized_Partition(ll a[],ll s,ll f)
{   /// Randomizing the pivot selection we made the probability of worst case tends to zero.
    /// thus the algorithm runs as average case complexity.
    ll pindex = s + ( rand() % (f-s+1) ); /// return a random value in range between s & f.
    swap(a[pindex],a[f]);
    return Partition(a,s,f);
}

void quick_sort(ll a[],ll s,ll f)
{
    if(s<f)
    {
        ll PartitionIndex=Randomized_Partition(a,s,f);
        quick_sort(a,s,PartitionIndex-1);
        quick_sort(a,PartitionIndex+1,f);
    }
}

int main()
{
    ll arr[100000],n;
    cout<<"How many numbers ? : ";
    cin>>n;
    for(ll i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    quick_sort(arr,1,n); /// take the array name , staring and end points(range where to sort).
    cout<<"Values after sorting :"<<endl;
    for(ll i=1; i<=n; i++)
        cout<<arr[i]<<" ";
    return 0;
}
