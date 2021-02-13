#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,k,m,i,count=0,x=0,p=0,q;
    static long long ara[100005],mo[100005];
    cin>>n>>k>>m;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        mo[i]=ara[i]%m;
    }
    sort(mo,mo+n);
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            count=1;
            x=1;
        }
        if(i==n-1)
        {
            count=max(x,count);
            x=1;
        }
        if(mo[i]==mo[i+1] && i!=n-1)
        {
            x++;
        }
        else
        {
            count=max(x,count);
            x=1;
        }
        if(count>=k)
        {
            q=mo[i];
            p=1;
            break;
        }
    }
    if(p==0)
        cout<<"No"<<"\n";
    else
    {
        cout<<"Yes"<<"\n";
        for(i=0;i<n;i++)
        {
            if(k==0)
                break;
            if(ara[i]%m==q)
            {
                cout<<ara[i]<<" ";
                k--;
            }
        }
    }
    return 0;
}
