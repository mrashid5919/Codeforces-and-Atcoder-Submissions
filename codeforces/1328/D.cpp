#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int ara[200005],ans[200005];

int main()
{
    fastio;
    int t,n,i,cnt;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(i>0)
            {
                if(ara[i]!=ara[i-1])
                    cnt++;
            }
            if(i==n-1)
            {
                if(ara[0]!=ara[n-1])
                    cnt++;
            }
        }
        //cout<<cnt<<"\n";
        if(cnt==0)
        {
            cout<<1<<"\n";
            for(i=0;i<n;i++)
                cout<<1<<" ";
            cout<<"\n";
            continue;
        }
        if(n%2==0)
        {
            cout<<2<<"\n";
            for(i=0;i<n;i++)
            {
                cout<<1+(i%2)<<" ";
            }
            cout<<"\n";
            continue;
        }
        if(cnt==n)
        {
            cout<<3<<"\n";
            for(i=0;i<n-1;i++)
            {
                cout<<1+(i%2)<<" ";
            }
            cout<<3<<" ";
            cout<<"\n";
        }
        else
        {
            cout<<2<<"\n";
            for(i=0;i<n;i++)
            {
                ans[i]=1+(i%2);
            }
            int f=0;
            for(i=1;i<n;i++)
            {
                if(ara[i]==ara[i-1])
                {
                    ans[i]=ans[i-1];
                    f=i;
                    break;
                }
            }
            if(f!=0)
            {
                for(i=f+1;i<n;i++)
                {
                    if(ans[i]==1)
                        ans[i]=2;
                    else
                        ans[i]=1;
                }
            }
            // else
            // {
            //     for(i=0;i<n-1;i++)
            //     {
            //         if(ans[i]==1)
            //             ans[i]=2;
            //         else
            //             ans[i]=1;
            //     }
            // }
            for(i=0;i<n;i++)
                cout<<ans[i]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}