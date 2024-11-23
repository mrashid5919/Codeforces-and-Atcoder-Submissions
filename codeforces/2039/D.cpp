#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[100005],ans[100005];

int main()
{
    fastio;
    long long t,n,m,i,j,p,fac;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n>>m;
        for(i=0;i<m;i++)
            cin>>ara[i];
        sort(ara,ara+m,greater<long long>());
        for(i=0;i<n;i++)
        {
            fac=0;
            long long x=i+1;
            for(j=2;j*j<=x;j++)
            {
                while(x%j==0)
                {
                    fac++;
                    x/=j;
                }
            }
            if(x>1)
                fac++;
            // if(i==29)
            //     cout<<fac<<"\n";
            if(fac>=m)
            {
                p=1;
                break;
            }
            ans[i]=ara[fac];
        }
        if(p==1)
            cout<<-1<<"\n";
        else
        {
            for(i=0;i<n;i++)
                cout<<ans[i]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}