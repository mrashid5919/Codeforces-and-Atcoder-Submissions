#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[100005];

int main()
{
    fastio;
    long long n,i,low,mid,high;
    for(i=0;i<=100000;i++)
        ara[i]=(i*(i+1))/2;
    low=1;
    high=100000;
    cin>>n;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(ara[mid]>=n && ara[mid-1]<n)
        {
            cout<<mid<<"\n";
            break;
        }
        else if(ara[mid]<n)
            low=mid+1;
        else
            high=mid-1;
    }
    return 0;
}
