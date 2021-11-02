#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005],ps[200005];

int main()
{
    fastio;
    long long t,n,i,mx;
    cin>>t;
    while(t--)
    {
        mx=INT_MIN;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n);
        /*for(i=0;i<n;i++)
        {
            if(i==0)
                ps[i]=ara[i];
            else
                ps[i]=ps[i-1]+ara[i];
        }*/
        ps[0]=ara[0];
        for(i=0;i<n;i++)
        {
            if(i!=0)
                ara[i]=ara[i]-ps[i-1];
            mx=max(mx,ara[i]);
            ps[i]=ps[i-1]+ara[i];
        }
        cout<<mx<<"\n";
    }
    return 0;
}
