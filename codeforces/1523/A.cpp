#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,m,i,x,j,p,ara[1005];
    string a;
    cin>>t;
    while(t--)
    {
        x=0;
        cin>>n>>m;
        cin>>a;
        for(i=0;i<n;i++)
        {
            if(a[i]=='1')
            {
                ara[x]=i;
                x++;
            }
        }
        for(i=0;i<x;i++)
        {
            if(i==0)
            {
                for(j=1;j<=min(ara[i],m);j++)
                    a[ara[i]-j]='1';
            }
            else
            {
                for(j=1;j<=min(m,(ara[i]-ara[i-1]-1)/2);j++)
                    a[ara[i]-j]='1';
            }
            if(i==x-1)
            {
                for(j=1;j<=min(m,n-1-ara[i]);j++)
                    a[ara[i]+j]='1';
            }
            else
            {
                for(j=1;j<=min(m,(ara[i+1]-ara[i]-1)/2);j++)
                    a[ara[i]+j]='1';
            }
        }
        cout<<a<<"\n";
    }
    return 0;
}
