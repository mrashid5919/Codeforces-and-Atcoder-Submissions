//Took help
#include<bits/stdc++.h>
using namespace std;

long long ara[100005],b[100005],c[100005];

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long check(long long a,long long b)
{
    if(a==0 && b==0)
        return 0;
    if(b==0)
    {
        return 1;
    }
    if(a==0)
    {
        return 0;
    }
    if(a==b)
        return 2;
    if(a>=2*b)
        return check(a%(2*b),b);
    return 1+check(b,abs(a-b));
}

int main()
{
    fastio;
    long long t,n,i,p,v;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        for(i=0;i<n;i++)
            cin>>b[i];
        for(i=0;i<n;i++)
        {
            c[i]=check(ara[i],b[i]);
        }
        //for(i=0;i<n;i++)
            //cout<<c[i]<<" ";
        v=-1;
        for(i=0;i<n;i++)
        {
            if(ara[i]==0 && b[i]==0)
                continue;
            v=i;
            break;
        }
        if(v==-1)
        {
            cout<<"YES\n";
            continue;
        }
        for(i=0;i<n;i++)
        {
            if(ara[i]==0 && b[i]==0)
                continue;
            if(abs(c[i]-c[v])%3)
            {
                p=1;
                break;
            }
        }
        if(p)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}