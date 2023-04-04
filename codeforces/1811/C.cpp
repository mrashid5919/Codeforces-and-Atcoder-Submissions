#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005],ans[200005];

int main()
{
    fastio;
    long long t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n-1;i++)
            cin>>ara[i];
        for(i=0;i<n-1;i++)
        {
            if(i==0)
            {
                ans[i]=ara[i];
                ans[i+1]=ara[i];
            }
            else
            {
                if(ara[i]<ara[i-1])
                    ans[i]=ara[i];
                ans[i+1]=ara[i];
            }
        }
        for(i=0;i<n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
