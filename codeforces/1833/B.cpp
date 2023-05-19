#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[100005],b[100005],ans[100005];

int main()
{
    fastio;
    long long t,n,k,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(i=0;i<n;i++)
            cin>>ara[i];
        for(i=0;i<n;i++)
            cin>>b[i];
        vector<pair<long long,long long> > vect;
        for(i=0;i<n;i++)
            vect.push_back(make_pair(ara[i],i));
        sort(vect.begin(),vect.end());
        sort(b,b+n);
        for(i=0;i<n;i++)
            ans[vect[i].second]=b[i];
        for(i=0;i<n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
