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

long long ara[200005];

int main()
{
    fastio;
    int t,n,i,zl,zr;
    cin>>t;
    while(t--)
    {
        cin>>n;
        zl=-1,zr=-1;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(ara[i]==0)
            {
                if(zl==-1)
                    zl=i;
                zr=i;
            }
        }
        if(zl==-1 && zr==-1)
        {
            cout<<1<<"\n";
            cout<<1<<" "<<n<<"\n";
        }
        else if(zl==zr)
        {
            if(zl==0)
            {
                cout<<2<<"\n";
                cout<<1<<" "<<2<<"\n";
                cout<<1<<" "<<n-1<<"\n";
            }
            else if(zl==n-1)
            {
                cout<<2<<"\n";
                cout<<n-1<<" "<<n<<"\n";
                cout<<1<<" "<<n-1<<"\n";
            }
            else
            {
                cout<<2<<"\n";
                cout<<zl<<" "<<zl+1<<"\n";
                cout<<1<<" "<<n-1<<"\n";
            }
        }
        else
        {
            if(zl==0 && zr==n-1)
            {
                cout<<3<<"\n";
                cout<<1<<" "<<2<<"\n";
                cout<<2<<" "<<n-1<<"\n";
                cout<<1<<" "<<2<<"\n";
                continue;
            }
            cout<<2<<"\n";
            cout<<zl+1<<" "<<zr+1<<"\n";
            cout<<1<<" "<<n-(zr-zl)<<"\n";
        }
    }
    return 0;
}