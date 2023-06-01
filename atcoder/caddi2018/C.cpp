#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,p,i,cnt,ans=1,j;
    cin>>n>>p;
    vector<pair<long long,long long> > vect;
    for(i=2;i*i<=p;i++)
    {
        if(p%i==0)
        {
            cnt=0;
            while(p%i==0)
            {
                cnt++;
                p/=i;
            }
            vect.push_back(make_pair(i,cnt));
        }
    }
    if(p!=1)
        vect.push_back(make_pair(p,1LL));
    for(i=0;i<vect.size();i++)
    {
        for(j=0;j<(vect[i].second/n);j++)
            ans*=vect[i].first;
    }
    cout<<ans<<"\n";
    return 0;
}