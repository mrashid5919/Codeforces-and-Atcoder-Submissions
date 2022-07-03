#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,k,i,cnt;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>n>>k;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
        }
        for(i=1;i<n-1;i++)
        {
            if(ara[i]>ara[i-1]+ara[i+1])
                    cnt++;
        }
        if(k==1)
        {
            cnt=max(cnt,n/2-((n%2)^1));
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
