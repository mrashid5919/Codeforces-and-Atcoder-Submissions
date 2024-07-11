
#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200010];


int main()
{
    fastio;    
    long long t,n,m,k,i,j;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        for(i=0;i<=n+1;i++)
            ara[i]=1000000;
        cin>>s;
        s='L'+s+'L';
        ara[0]=0;
        for(i=0;i<=n;i++)
        {
            if(s[i]=='L')
            {
                for(j=1;j<=m;j++)
                {
                    if(i+j>n+1)
                        break;
                    if(s[i+j]!='C')
                        ara[i+j]=min(ara[i+j],ara[i]);
                }
            }
            else if(s[i]=='W')
            {
                if(ara[i]>k)
                {
                    continue;
                }
                if(s[i+1]!='C')
                    ara[i+1]=min(ara[i+1],ara[i]+1);
            }
        }
        if(ara[n+1]<=k)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}