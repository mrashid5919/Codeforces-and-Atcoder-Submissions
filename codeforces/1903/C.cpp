#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200010],sf[200010];

int main()
{
    fastio;
    long long t,n,i,mx,p,cur;
    cin>>t;
    while(t--)
    {
        mx=0;
        cur=0;
        cin>>n;
        for(i=1;i<=n;i++)
            cin>>ara[i];
        for(i=n;i>=1;i--)
        {
            if(i==n)
                sf[i]=ara[i];
            else
                sf[i]=sf[i+1]+ara[i];
        }
        // p=n;
        // for(i=n;i>0;i--)
        // {
        //     if(ara[i]<=0)
        //         p--;
        //     else
        //         break;
        // }
        // if(p==0)
        // {
        //     for(i=1;i<=n;i++)
        //         mx+=ara[i];
        // }
        // else
        // {
        //     for(i=1;i<=n;i++)
        //     {
        //         if(i<=p)
        //         {
        //             cur++;
        //         }
        //         mx+=cur*ara[i];
        //     }
        // }
        mx=sf[1];
        for(i=2;i<=n;i++)
        {
            if(mx+sf[i]>=mx)
                mx+=sf[i];
        }
        cout<<mx<<"\n";
    }
    return 0;
}