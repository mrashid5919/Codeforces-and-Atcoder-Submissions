#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005],c[200005];

int main()
{
    fastio;
    long long n,k,i;
    cin>>n>>k;
    for(i=0;i<n;i++)
        cin>>ara[i];
     vector< pair <long long,long long> > vect;
    for (int i=0; i<n; i++)
        vect.push_back( make_pair(ara[i],i) );
    sort(vect.begin(),vect.end());
    for(i=0;i<n;i++)
        c[i]=k/n;
    for(i=0;i<k%n;i++)
        c[vect[i].second]++;
    for(i=0;i<n;i++)
        cout<<c[i]<<"\n";
    return 0;
}
