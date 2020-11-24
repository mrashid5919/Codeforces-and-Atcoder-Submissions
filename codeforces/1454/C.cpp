#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,mx,d,ans,l,r;
    static long long ara[200005];
    cin>>t;
    while(t--)
    {
        ans=INT_MAX;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
        }
        vector< pair <int,int> > vect;
        for (i=0; i<n; i++)
            vect.push_back( make_pair(ara[i],i) );
        sort(vect.begin(), vect.end());
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                d=0;
                l=-1;
                r=vect[i].second;
            }
            else
            {
                if(vect[i].first>vect[i-1].first)
                {
                    l=-1;
                    d=0;
                }
                else
                    l=r;
                r=vect[i].second;
            }
            if(r-l-1>0)
                d++;
            if(vect[i].first!=vect[i+1].first || i==n-1)
            {
                l=r;
                r=n;
                if(r-l-1>0)
                    d++;
                ans=min(ans,d);
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
