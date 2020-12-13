#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,m,i,mn,count=0,sum=0;
    static long long ara[200005],c[200005];
    mn=INT_MAX;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>ara[i];
    }
    if(m==n)
    {
        cout<<0;
        return 0;
    }
    else if(m==0)
    {
        cout<<1;
        return 0;
    }
    sort(ara,ara+m);
    for(i=0;i<m;i++)
    {
        if(i==0)
        {
            if(ara[i]!=1)
            {
                c[count]=ara[i]-1;
                mn=ara[i]-1;
                count++;
            }
            continue;
        }
        if(ara[i]-ara[i-1]>1)
        {
            c[count]=ara[i]-ara[i-1]-1;
            mn=min(mn,ara[i]-ara[i-1]-1);
            count++;
        }
        if(i==m-1)
        {
            if(ara[i]!=n)
            {
                c[count]=n-ara[i];
                mn=min(mn,n-ara[i]);
                count++;
            }
        }
    }
    for(i=0;i<count;i++)
    {
        if(c[i]%mn==0)
            sum+=(c[i]/mn);
        else
            sum+=1+(c[i]/mn);
    }
    cout<<sum;
    return 0;
}
