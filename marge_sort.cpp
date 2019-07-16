#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void marge_sort(ll a[],ll s, ll f)
{
    if(s==f)
        return;
    ll m=(s+f)/2;
    marge_sort(a,s,m);
    marge_sort(a,m+1,f);
    vector<ll>v;
    ll i=s,j=m+1;
    while(i<=m && j<=f)
    {
        if(a[i]>a[j])
        {
            v.push_back(a[j]);
            j++;
        }
        else
        {
            v.push_back(a[i]);
            i++;
        }
    }
    while(i<=m)
    {
        v.push_back(a[i]);
        i++;
    }
    while(j<=f)
    {
        v.push_back(a[j]);
        j++;
    }
    ll p=0,q=s;
    while(p<v.size())
    {
        a[q]=v[p];
        p++;
        q++;
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
    marge_sort(arr,1,n); /// take the array name , staring and end points(range where to sort).
    cout<<"Values after sorting :"<<endl;
    for(ll i=1; i<=n; i++)
        cout<<arr[i]<<" ";
    return 0;
}
