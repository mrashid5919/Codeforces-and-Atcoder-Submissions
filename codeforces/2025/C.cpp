#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005],cont[200005];

int main() {
    fastio;
    long long t,n,k,i,mx,dist;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(i=0;i<n;i++)
            cin>>ara[i];
        mx=0;
        dist=1;
        sort(ara,ara+n);
        vector<pair<long long,long long> > vect;
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                cont[dist-1]=1;
                vect.push_back(make_pair(ara[i],1));
            }
            else if(ara[i]==ara[i-1])
            {
                vect[dist-1].second++;
            }
            else
            {
                vect.push_back(make_pair(ara[i],1));
                dist++;
                if(ara[i]==vect[dist-2].first+1)
                    cont[dist-1]=cont[dist-2]+1;
                else
                    cont[dist-1]=1;
            }
        }
        for(i=1;i<dist;i++)
            vect[i].second+=vect[i-1].second;
        mx=vect[0].second;
        for(i=1;i<dist;i++)
        {
            if(cont[i]>k)
                mx=max(mx,vect[i].second-vect[i-k].second);
            else if(cont[i]<=i)
                mx=max(mx,vect[i].second-vect[i-cont[i]].second);
            else
                mx=max(mx,vect[i].second);
        }
        cout<<mx<<"\n";
    }
    return 0;
}