#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,q,k,i,l,r,a;
    static long long ara[100005],ans[100005],sum[100005];
    cin>>n>>q>>k;
    for(i=1; i<=n; i++)
        cin>>ara[i];
    for(i=1; i<=n; i++)
    {
        if(i==1)
        {
            ans[i]=ara[i+1]-ara[i]-1+ara[i]-1;
            sum[i]=ans[i];
        }
        else
        {
            if(i==n)
                ans[i]=ara[i]-ara[i-1]-1+k-ara[i];
            else
                ans[i]=ara[i]-ara[i-1]-1+ara[i+1]-ara[i]-1;
            sum[i]=sum[i-1]+ans[i];
        }
    }
    while(q--)
    {
        cin>>l>>r;
        if(l==r)
        {
            cout<<k-1<<"\n";
            continue;
        }
        else
        {
            a=sum[r-1]-sum[l];
            a+=ara[l+1]-ara[l]-1+ara[l]-1;
            a+=ara[r]-ara[r-1]-1+k-ara[r];
            cout<<a<<"\n";
            /*for(i=l; i<=r; i++)
            {
                if(i==r && r!=n)
                    sum+=ara[i]-ara[i-1]-1+k-ara[i];
                else if(i==l && l!=1)
                    sum+=ara[i+1]-ara[i]-1+ara[i]-1;
                else
                    sum+=ans[i];
            }*/
        }
    }
    return 0;
}
