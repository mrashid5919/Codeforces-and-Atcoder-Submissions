#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[100005],pr[100005];

int main()
{
    fastio;
    long long t,n,q,i,ze,on,op,a,b,f;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        f=0;
        pr[0]=0;
        for(i=1;i<=n;i++)
        {
            cin>>ara[i];
            pr[i]=pr[i-1]^ara[i];
        }
        cin>>s;
        ze=0;
        on=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='0')
                ze=ze^ara[i+1];
            else
                on=on^ara[i+1];
        }
        cin>>q;
        while(q--)
        {
            cin>>op;
            if(op==1)
            {
                cin>>a>>b;
                ze=ze^(pr[a-1]^pr[b]);
                on=on^(pr[a-1]^pr[b]);
            }
            else
            {
                f=1;
                cin>>a;
                if(a==0)
                    cout<<ze<<" ";
                else
                    cout<<on<<" ";
            }
        }
        if(f==1)
            cout<<"\n";
    }
    return 0;
}