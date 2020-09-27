#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,k,i,ara[1003],sum;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n>>k;
        for(i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n);
        for(i=1;i<n;i++)
        {
            sum=sum+((k-ara[i])/ara[0]);
            ara[i]=ara[i]+ara[0]*((k-ara[i])/ara[0]);
        }
        sort(ara+1,ara+n);
        sum=sum+((k-ara[0])/ara[1]);
        cout<<sum<<"\n";
    }
    return 0;
}
