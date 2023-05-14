#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005],b[200005],M=1000000007;

int main()
{
    fastio;
    long long t,n,i,ans,cnt;
    cin>>t;
    while(t--)
    {
        ans=1;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        for(i=0;i<n;i++)
            cin>>b[i];
        vector<long long> vect;
        for(i=0;i<n;i++)
            vect.push_back(ara[i]);
        sort(vect.begin(),vect.end());
        sort(b,b+n,greater<long long>());
        vector<long long>::iterator it;
        for(i=0;i<n;i++)
        {
            it=upper_bound(vect.begin(),vect.end(),b[i]);
            if(it!=vect.end())
            {
                cnt=n-(it-vect.begin())-i;
                if(cnt<1)
                {
                    ans=0;
                    break;
                }
                ans=(ans*cnt)%M;
            }
            else
            {
                ans=0;
                break;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
