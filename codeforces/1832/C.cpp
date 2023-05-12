#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[300005];

int main()
{
    fastio;
    long long t,n,i,mn,mx,dir,cnt,cng;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(i==0)
            {
                mn=ara[0];
                mx=ara[0];
            }
            else
            {
                mn=min(mn,ara[i]);
                mx=max(mx,ara[i]);
            }
        }
        if(mn==mx)
        {
            cout<<1<<"\n";
            continue;
        }
        dir=0;
        cnt=1;
        for(i=1;i<n;i++)
        {
            cng=0;
            if(dir==0)
            {
                if(ara[i]>ara[i-1])
                    dir=1;
                else if(ara[i]<ara[i-1])
                    dir=-1;
            }
            else if(dir==1)
            {
                if(ara[i]<ara[i-1])
                {
                    cng=1;
                    cnt++;
                    dir=-1;
                }
            }
            else if(dir==-1)
            {
                if(ara[i]>ara[i-1])
                {
                    cng=1;
                    cnt++;
                    dir=1;
                }
            }
            //if(i==n-1 && cng==0)
                //cnt++;
        }
        if(n>1)
            cnt++;
        cout<<cnt<<"\n";
    }
    return 0;
}
