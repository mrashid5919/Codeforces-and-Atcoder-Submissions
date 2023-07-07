#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[1000005];

long long power(long long x,long long y)
{
    long long u=1;
    for(long long i=0;i<y;i++)
        u*=x;
    return u;
}

int main()
{
    fastio;
    long long t,n,i,j,x,p;
    for(i=2;i*i<=1000000;i++)
    {
        //if(ara[i]==0)
        {
            x=1+i+i*i;
            p=2;
            while(x<=1000000)
            {
                ara[x]=1;
                p++;
                x+=power(i,p);
                //if(x==15)
                    //cout<<"here";
            }
        }
    }
    cin>>t;
    while(t--)
    {
        cin>>x;
        if(ara[x])
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}