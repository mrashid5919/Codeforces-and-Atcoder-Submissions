#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005],b[200005],ans[200005];

int main()
{
    fastio;
    long long t,n,i,x,cnt;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        vector<pair<long long,long long> > vect;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            vect.push_back({ara[i],i});
        }
        for(i=0;i<n;i++)
            cin>>b[i];
        sort(vect.begin(),vect.end());
        sort(b,b+n);
        for(i=n-1;i>n-1-x;i--)
            ans[vect[i].second]=b[x-(n-1-i)-1];
        for(i=0;i<n-x;i++)
            ans[vect[i].second]=b[x+i];
        cnt=0;
        for(i=0;i<n;i++)
        {
            if(ara[i]>ans[i])
                cnt++;
        }
        if(cnt!=x)
            cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            for(i=0;i<n;i++)
                cout<<ans[i]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}