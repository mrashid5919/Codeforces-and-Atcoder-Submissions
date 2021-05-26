#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[100005],c,ans[100005];

int main()
{
    fastio;
    long long n,i,j,x;
    cin>>n;
    for(i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            if(i*i==n)
            {
                ara[c]=i;
                c++;
            }
            else
            {
                ara[c]=i;
                ara[c+1]=n/i;
                c+=2;
            }
        }
    }
    for(i=0;i<c;i++)
    {
        if(i==0)
            ans[i]=(n*(n+1))/2;
        else
        {
            x=n/ara[i]-1;
            ans[i]=((x*(x+1))/2)*ara[i]+x+1;
        }
    }
    sort(ans,ans+c);
    for(i=0;i<c;i++)
        cout<<ans[i]<<" ";
    return 0;
}
