#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005],z[200005];

int main()
{
    fastio;
    long long t,n,m,i,total,cur,p;
    cin>>t;
    while(t--)
    {
        total=0;
        cin>>n>>m;
        for(i=0;i<n;i++)
            cin>>ara[i];
        for(i=0;i<n;i++)
        {
            cur=0;
            p=0;
            while(ara[i]>0)
            {
                if(ara[i]%10==0)
                {
                    if(p==0)
                        cur++;
                }
                else
                {
                    p=1;
                }
                total++;
                ara[i]/=10;
            }
            z[i]=cur;
        }
        sort(z,z+n,greater<long long>());
        for(i=0;i<n;i+=2)
        {
            total-=z[i];
        }
        if(total<=m)
            cout<<"Anna\n";
        else
            cout<<"Sasha\n";
    }
    return 0;
}