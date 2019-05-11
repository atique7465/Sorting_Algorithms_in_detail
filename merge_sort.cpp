#include<bits/stdc++.h>
using namespace std;
int arr[100000000];
int n;
void margesort(int lo,int hi)
{
    if(lo==hi)
    {
        return;
    }
    int mid;
    mid=(lo+hi-1)/2;
    margesort(lo,mid);
    margesort(mid+1,hi);

    int i,j,k,n1,n2;
    n1=mid-lo+1;
    n2=hi-mid;
    int s1[n1],s2[n2];

    for(i=0; i<n1; i++)
        s1[i]=arr[lo+i];
    for(j=0; j<n2; j++)
        s2[j]=arr[mid+1+j];

    i=0;
    j=0;
    k=lo;

    while(i<n1&&j<n2)
    {
        if(s1[i]<=s2[j])
        {
            arr[k]=s1[i];
            i++;
        }
        else
        {
            arr[k]=s2[j];
            j++;
        }
        k++;
    }

    while(i<n1)
    {
        arr[k]=s1[i];
        k++;
        i++;
    }

    while(j<n1)
    {
        arr[k]=s2[j];
        k++;
        j++;
    }
    cout<<"l0= "<<lo<<" "<<"hi="<<hi<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    //int n;
    cout<<"enter the number of values: "<<endl;
    cin>>n;
    cout<<"enter the unsorted values:"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    margesort(0,n-1);
    cout<<"The sorted values are:"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
