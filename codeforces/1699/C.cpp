//Taken help
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

#define M 1000000007

long long pos[100005];

int main()
{
    fastio;
    long long t,n,i,x,l,r,ans;
    cin>>t;
    while(t--)
    {
        ans=1LL;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>x;
            pos[x]=i;
        }
        l=pos[0];
        r=pos[0];
        for(i=1;i<n;i++)
        {
            if(pos[i]<l)
                l=pos[i];
            else if(pos[i]>r)
                r=pos[i];
            else
                ans=(ans*(r-l+1-i))%M;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
