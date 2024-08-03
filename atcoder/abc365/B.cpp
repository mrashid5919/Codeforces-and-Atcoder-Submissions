#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200];

int main()
{
    fastio;
    long long n,i;
    vector<pair<long long,long long> > vect;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        vect.push_back({ara[i],i});
    }
    sort(vect.begin(),vect.end());
    cout<<vect[n-2].second+1<<"\n";
    return 0;
}