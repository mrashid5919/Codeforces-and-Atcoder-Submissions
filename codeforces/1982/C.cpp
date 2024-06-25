#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[100005];

int main()
{
    fastio;
    long long t,n,l,r,i,cnt,cur,lp,rp;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cur=0; lp=-1; rp=-1;
        cin>>n>>l>>r;
        for(i=0;i<n;i++)
            cin>>ara[i];
        for(i=0;i<n;i++)
        {
            if(cur==0)
            {
                if(ara[i]<l)
                {
                    cur=ara[i];
                    lp=i;
                    rp=i;
                }
                else if(ara[i]>=l && ara[i]<=r)
                {
                    cnt++;
                    cur=0;
                    lp=i;
                    rp=i;
                }
                else
                {
                    cur=0;
                    lp=i;
                    rp=i;
                }
            }
            else if(cur+ara[i]>=l && cur+ara[i]<=r)
            {
                cnt++;
                cur=0;
                lp=i;
                rp=i;
            }
            else if(cur+ara[i]<l)
            {
                cur+=ara[i];
                rp=i;
            }
            else
            {
                int f=0;
                while(lp!=rp)
                {
                    cur-=ara[lp];
                    lp++;
                    if(cur+ara[i]>=l && cur+ara[i]<=r)
                    {
                        f=1;
                        cnt++;
                        cur=0;
                        lp=i;
                        rp=i;
                        break;
                    }
                    else if(cur+ara[i]<l)
                    {
                        f=1;
                        cur+=ara[i];
                        rp=i;
                        break;
                    }
                }
                if(f==1)
                    continue;
                cur=ara[i];
                if(cur>=l && cur<=r)
                {
                    cnt++;
                    cur=0;
                    lp=i;
                    rp=i;
                }
                else if(cur>r)
                {
                    cur=0;
                    lp=i;
                    rp=i;
                }
                else
                {
                    lp=i;
                    rp=i;
                }
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}