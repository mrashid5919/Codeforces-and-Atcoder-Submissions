#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,sum,p,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=0;
        p=0;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            sum+=ara[i];
        }
        x=sum/n;
        for(i=0;i<n-1;i++)
        {
            if(ara[i]>x)
            {
                ara[i+1]+=(ara[i]-x);
                ara[i]=x;
            }
        }
        for(i=0;i<n;i++)
        {
            if(ara[i]!=x)
            {
                p=1;
                break;
            }
        }
        if(p==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
}