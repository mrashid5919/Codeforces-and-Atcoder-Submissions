#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200010],ps[200010];

int main()
{
    fastio;
    long long t,n,k,i,sum;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n>>k;
        for(i=1;i<=n;i++)
        {
            cin>>ara[i];
        }
        sort(ara+1,ara+n+1);
        for(i=1;i<=n;i++)
        {
            if(i==1)
                ps[i]=ara[i];
            else
                ps[i]=ps[i-1]+ara[i];
        }
        for(i=1;i<=n;i++)
        {
            if(ps[i]<=k){
                sum+=(k-ps[i])/i;
                sum++;
            }
            else
                break;
        }
        cout<<sum<<"\n";
    }
    return 0;
}
