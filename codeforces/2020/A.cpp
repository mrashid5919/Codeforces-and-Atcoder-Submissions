#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,k,i,ans,r;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(k==1)
        {
            cout<<n<<"\n";
            continue;
        }
        ans=0;
        vector<long long> pr;
        pr.push_back(1LL);
        for(i=1;;i++)
        {
            if(pr[i-1]*k>1000000000)
                break;
            else
                pr.push_back(pr[i-1]*k);
        }
        r=pr.size()-1;
        while(r!=-1)
        {
            if(n>=pr[r])
            {
                ans+=(n/pr[r]);
                n=n%pr[r];
            }
            r--;
        }
        cout<<ans<<"\n";
    }
    return 0;
}