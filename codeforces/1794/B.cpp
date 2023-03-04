#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,ara[10005];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        for(i=0;i<n;i++)
        {
            if(ara[i]==1)
            {
                if(i!=n-1)
                    ara[i]++;
            }
            if(i!=0 && ara[i]%ara[i-1]==0)
                ara[i]++;
        }
        for(i=0;i<n;i++)
            cout<<ara[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
