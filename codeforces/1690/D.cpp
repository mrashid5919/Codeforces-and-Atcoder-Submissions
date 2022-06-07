#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,k,i,b,w,bmax,temp,bmin;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        b=0;
        w=0;
        temp=0;
        bmax=INT_MIN;
        bmin=INT_MAX;
        cin>>s;
        for(i=0;i<n;i++)
            ara[i]=0;
        /*for(i=0;i<n;i++)
        {
            if(s[i]=='W')
            {
                w++;
                bmax=max(bmax,temp);
                temp=0;
            }
            else
            {
                b++;
                temp++;
            }
        }
        if(b==0)
        {
            cout<<k<<"\n";
            continue;
        }
        if(bmax>=k)
        {
            cout<<0<<"\n";
            continue;
        }*/
        for(i=0;i<=n-k;i++)
        {
            if(i==0)
            {
                for(long long j=0;j<k;j++)
                {
                    if(s[j]=='B')
                        ara[i]++;
                }
            }
            else
            {
                if(s[i-1]=='B')
                    ara[i]=ara[i-1]-1;
                else
                    ara[i]=ara[i-1];
                if(s[i+k-1]=='B')
                    ara[i]++;
            }
            bmin=min(bmin,max(0LL,k-ara[i]));
        }
        cout<<bmin<<"\n";
    }
    return 0;
}
