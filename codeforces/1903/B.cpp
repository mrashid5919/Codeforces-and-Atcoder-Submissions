#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[1005][1005];

int main()
{
    fastio;
    long long t,n,i,j,p,ans[1005],k;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            ans[i]=0;
            for(j=0;j<n;j++)
                cin>>ara[i][j];
        }
        for(i=0;i<n;i++)
        {
            int cnt[40];
            for(k=0;k<30;k++)
                cnt[k]=0;
            for(j=0;j<n;j++)
            {
                if(j==i)
                    continue;
                for(k=0;k<30;k++)
                {
                    if(ara[i][j]&(1<<k))
                        cnt[k]++;
                }
            }
            for(k=0;k<30;k++)
            {
                if(cnt[k]==n-1 && cnt[k]>0)
                    ans[i]+=(1<<k);
            }
            //cout<<ans[i]<<"\n";
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==j)
                    continue;
                if((ans[i]|ans[j])!=ara[i][j])
                {
                    p=1;
                    break;
                }
            }
            if(p==1)
                break;
        }
        if(p==1)
            cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            for(i=0;i<n;i++)
                cout<<ans[i]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}