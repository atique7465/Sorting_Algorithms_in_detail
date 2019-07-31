//---------------------------------------------------------------------------------------------------------
/// Time Complexity : O(n^2).
/// Resource : https://www.youtube.com/watch?v=Jdtq5uKz-w4&list=PL2_aWCzGMAwKedT2KfDMB9YA5DgASZb3U&index=3
//---------------------------------------------------------------------------------------------------------

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void Bubble_sort(ll a[],ll n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<=n-i-1; j++)
        {
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
        }
    }
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
    Bubble_sort(arr,n);
    cout<<"Values after sorting :"<<endl;
    for(ll i=0; i<n; i++)
        cout<<arr[i]<<" ";
    return 0;
}

