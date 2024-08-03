#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005],cur[200005];

int main()
{
    fastio;
    long long n,m,i,mx,p=0;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+n);
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            if(n*ara[i]<=m)
            {
                cur[0]=ara[i];
                mx=ara[i];
            }
            else
            {
                mx=m/n;
                p=1;
                break;
            }
        }
        else
        {
            if((n-i)*(ara[i])<=m-cur[i-1])
            {
                cur[i]=cur[i-1]+ara[i];
                mx=ara[i];
            }
            else
            {
                mx=(m-cur[i-1])/(n-i);
                p=1;
                break;
            }
        }
    }
    if(p==0)
        cout<<"infinite\n";
    else
        cout<<mx<<"\n";
    return 0;
}