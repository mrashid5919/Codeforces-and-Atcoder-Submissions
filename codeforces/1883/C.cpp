#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int ara[200005];

int main()
{
    fastio;
    int t,n,k,i,cnt[10],ans;
    cin>>t;
    while(t--)
    {
        for(i=0;i<6;i++)
            cnt[i]=0;
        cin>>n>>k;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            for(int j=2;j<=5;j++)
            {
                if(ara[i]%j==0)
                    cnt[j]++;
            }
        }
        if(cnt[k]>0)
        {
            cout<<0<<"\n";
            continue;
        }
        if(k==2)
        {
            cout<<1<<"\n";
            continue;
        }
        if(k==3)
        {
            for(i=0;i<n;i++)
            {
                if(i==0)
                    ans=((ara[i]/3)+1)*3-ara[i];
                else
                    ans=min(ans,((ara[i]/3)+1)*3-ara[i]);
            }
        }
        else if(k==4)
        {
            if(cnt[2]>1)
                ans=0;
            else
            {
                ans=2-cnt[2];
                for(i=0;i<n;i++)
                {
                    ans=min(ans,((ara[i]/4)+1)*4-ara[i]);
                }
            }
        }
        else if(k==5)
        {
            for(i=0;i<n;i++)
            {
                if(i==0)
                    ans=((ara[i]/5)+1)*5-ara[i];
                else
                    ans=min(ans,((ara[i]/5)+1)*5-ara[i]);
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}