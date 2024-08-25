#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,m,i,j,cnt,mx,sum,x,cur;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        mx=0;
        for(i=0;i<n;i++)
        {
            cur=0;
            cnt=0;
            cin>>x;
            for(j=0;j<x;j++)
                cin>>ara[j];
            sort(ara,ara+x);
            if(ara[0]>1)
            {
                cnt=2;
                cur=1;
            }
            else if(ara[0]==1)
            {
                cnt=1;
                cur=1;
            }
            for(j=1;j<x;j++)
            {
                if(cnt==2)
                    break;
                if(ara[j]>ara[j-1]+1)
                {
                    if(ara[j]==ara[j-1]+2)
                    {
                        cnt++;
                        cur=ara[j-1]+1;
                    }
                    else
                    {
                        if(cnt==1)
                        {
                            cnt++;
                            cur=ara[j-1]+1;
                        }
                        else
                        {
                            cnt=2;
                            cur=ara[j-1]+2;
                        }
                    }
                }
                // if(cnt==2)
                //     break;
            }
            if(cnt==0)
                cur=ara[x-1]+2;
            if(cnt==1)
                cur=ara[x-1]+1;
            //cout<<cur<<"\n";
            mx=max(mx,cur);
        }
        //cout<<mx<<"\n";
        if(m<=mx)
        {
            cout<<mx*(m+1)<<"\n";
            continue;
        }
        sum=(mx+1)*mx;
        sum+=(m*(m+1))/2-(mx*(mx+1))/2;
        cout<<sum<<"\n";
    }
    return 0;
}