#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[100005],b[100005];

int main()
{
    fastio;
    long long t,n,x,i,p;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n>>x;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            b[i]=ara[i];
        }
        sort(b,b+n);
        if(n%2==1)
        {
            x=x-n/2-1;
            if(x>=0)
            {
                for(i=n/2-x;i<=n/2+x;i++)
                {
                    if(ara[i]!=b[i])
                    {
                        p=1;
                        break;
                    }
                }
            }
        }
        else
        {
            x=x-n/2;
            if(x>0)
            {
                for(i=n/2-x;i<n/2+x;i++)
                {
                    if(ara[i]!=b[i])
                    {
                        p=1;
                        break;
                    }
                }
            }
        }
        if(p==0)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
    return 0;
}
