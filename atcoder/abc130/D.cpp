#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[100005];

int main()
{
    fastio;
    long long n,k,i,low,high,sum=0,count=0;
    cin>>n>>k;
    for(i=0;i<n;i++)
        cin>>ara[i];
    low=0;
    high=-1;
    while(low<n)
    {
        while(sum<k && high<n)
        {
            sum+=ara[high];
            high++;
        }
        if(high==n && sum<k)
            break;
        count+=n-high+1;
        sum-=ara[low];
        low++;
    }
    cout<<count<<"\n";
    return 0;
}
