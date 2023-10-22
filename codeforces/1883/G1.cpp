#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[100005],b[100005];

int main()
{
    fastio;
    long long t,n,m,i,cnt,dif;
    cin>>t;
    while(t--)
    {
        cnt=0;
        dif=0;
        cin>>n>>m;
        ara[0]=1;
        for(i=1;i<n;i++)
            cin>>ara[i];
        for(i=0;i<n;i++)
            cin>>b[i];
        sort(ara,ara+n);
        sort(b,b+n);
        for(i=0;i<n-cnt;i++)
        {
            if(ara[i]>=b[i+cnt])
            {
                int p=0;
                while(i+cnt+1<n)
                {
                    cnt++;
                    if(ara[i]<b[i+cnt])
                    {
                        p=1;
                        break;
                    }
                }
                if(p==0)
                {
                    cnt=n-i;
                    break;
                }
            }
        }
        cout<<cnt<<"\n";
    }
}