#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,w,i,sum,count,p;
    static long long ara[200005],ans[200005];
    cin>>t;
    while(t--)
    {
        sum=0;
        count=0;
        cin>>n>>w;
        for(i=1; i<=n; i++)
            cin>>ara[i];
        vector <pair<long long,long long>>vect;
        for(i=0; i<n; i++)
            vect.push_back( make_pair(ara[i+1],i+1) );
        sort(vect.begin(), vect.end());
        for(i=0; i<n; i++)
        {
            if(sum+vect[i].first<=w)
            {
                count++;
                sum=sum+vect[i].first;
                ans[count]=vect[i].second;
            }
            else
            {
                break;
            }
        }
        if(sum>=(w/2+w%2))
        {
            cout<<count<<"\n";
            for(i=1; i<=count; i++)
                cout<<ans[i]<<" ";
            cout<<"\n";
            continue;
        }
        count=0;
        sum=0;
        for(i=n-1; i>=0; i--)
        {
            if(sum+vect[i].first<=w)
            {
                count++;
                sum=sum+vect[i].first;
                ans[count]=vect[i].second;
            }
        }
        if(sum>=(w/2+w%2))
        {
            cout<<count<<"\n";
            for(i=1; i<=count; i++)
                cout<<ans[i]<<" ";
            cout<<"\n";
            continue;
        }
        else
            cout<<"-1"<<"\n";
    }
    return 0;
}
