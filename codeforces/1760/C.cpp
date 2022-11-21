#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;

        vector<pair<long long,long long> > vect;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            vect.push_back(make_pair(ara[i],i));
        }
        sort(vect.begin(),vect.end());
        for(i=0;i<n;i++)
        {
            if(i==n-1)
                ara[vect[i].second]=vect[i].first-vect[i-1].first;
            else
                ara[vect[i].second]=vect[i].first-vect[n-1].first;
        }
        for(i=0;i<n;i++)
            cout<<ara[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
