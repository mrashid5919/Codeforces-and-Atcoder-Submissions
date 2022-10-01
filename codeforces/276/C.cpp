//Took help
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long n,q,i,j,ans=0,l,r;
    cin>>n>>q;
    for(i=0;i<n;i++)
        cin>>ara[i];
    vector<long long> lft,rt;
    for(i=0;i<q;i++)
    {
        cin>>l>>r;
        lft.push_back(l-1);
        rt.push_back(r-1);
    }
    sort(lft.begin(),lft.end());
    sort(rt.begin(),rt.end());
    vector< pair <long long,long long> > vect;
    for(i=0;i<n;i++)
    {
        long long x=lft.end()-upper_bound(lft.begin(),lft.end(),i);
        long long y=lower_bound(rt.begin(),rt.end(),i)-rt.begin();
        vect.push_back(make_pair(q-x-y,i));
    }
    sort(vect.begin(),vect.end());
    sort(ara,ara+n);
    for(i=0;i<n;i++)
        ans+=ara[i]*vect[i].first;
    cout<<ans<<"\n";
    return 0;
}
