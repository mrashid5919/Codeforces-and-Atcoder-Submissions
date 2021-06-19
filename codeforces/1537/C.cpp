#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,idx,mn;
    cin>>t;
    while(t--)
    {
        mn=INT_MAX;
        idx=-1;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n);
        for(i=0;i<n-1;i++)
        {
            if(ara[i+1]-ara[i]<=mn)
            {
                mn=ara[i+1]-ara[i];
                idx=i;
            }
        }
        cout<<ara[idx]<<" ";
        for(i=idx+2;i<n;i++)
            cout<<ara[i]<<" ";
        for(i=0;i<idx;i++)
            cout<<ara[i]<<" ";
        cout<<ara[idx+1]<<"\n";
    }
    return 0;
}
