#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long power(long long x,long long y)
{
    long long res=1;
    while(y>0)
    {
        res*=x;
        y--;
    }
    return res;
}

int ara[100005],vis[100005];

int main()
{
    fastio;
    int n,i,j,mx=1,cur,cv,k;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            vis[j]=0;
        }
        for(j=0;j<n;j++)
        {
            if(vis[j]==0)
            {
                cur=1;
                cv=ara[j];
                for(k=j+i;k<n;k+=i)
                {
                    if(ara[k]==cv)
                    {
                        cur++;
                        vis[k]=1;
                    }
                    else
                    {
                        break;
                    }
                }
                mx=max(mx,cur);
            }
        }
    }
    cout<<mx<<"\n";
    return 0;
}