#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[100005];

int main()
{
    fastio;
    long long t,n,m,i,sum,p,ans;
    string s;
    cin>>t;
    while(t--)
    {
        sum=0; p=0;
        cin>>n>>m;
        for(i=1;i<=n;i++)
        {
            cin>>s;
            if(p==1)
                continue;
            sum+=s.size();
            if(sum>m)
            {
                p=1;
                ans=i-1;
            }
        }
        if(p==0)
            cout<<n<<"\n";
        else
            cout<<ans<<"\n";
    }
    return 0;
}