#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005];

int main()
{
    fastio;
    {
        long long t,n,k,i,g,cur,ans;
        cin>>t;
        while(t--)
        {
            g=0;
            ans=0;
            cin>>n>>k;
            for(i=0;i<n;i++)
                cin>>ara[i];
            for(i=0;i<k-1;i++)
            {
                if(ara[i]>ara[k-1])
                    g++;
            }
            if(g>0)
            {
                for(i=0;i<k-1;i++)
                {
                    if(ara[i]>ara[k-1])
                    {
                        swap(ara[i],ara[k-1]);
                        cur=i;
                        break;
                    }
                }
                if(cur>0)
                    ans++;
                for(i=cur+1;i<n;i++)
                {
                    if(ara[i]>ara[cur])
                    {
                        break;
                    }
                    ans++;
                }
                cout<<max(ans,cur-1)<<"\n";
            }
            else if(g==0)
            {
                swap(ara[0],ara[k-1]);
                for(i=1;i<n;i++)
                {
                    if(ara[i]>ara[0])
                    {
                        break;
                    }
                    ans++;
                }
                cout<<ans<<"\n";
            }
        }
    }
    return 0;
}