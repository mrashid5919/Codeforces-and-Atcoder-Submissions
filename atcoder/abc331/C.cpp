#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005],ps[200005];

int main()
{
    fastio;
    long long n,i;
    cin>>n;
    vector<long long> vect;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        vect.push_back(ara[i]);
    }
    sort(vect.begin(),vect.end());
    ps[0]=vect[i];
    for(i=1;i<n;i++)
        ps[i]=ps[i-1]+vect[i];
    vector<long long>::iterator it;
    for(i=0;i<n;i++)
    {
        it=upper_bound(vect.begin(),vect.end(),ara[i]);
        if(it!=vect.end())
        {
            cout<<ps[n-1]-ps[(it-vect.begin())-1]<<" ";
        }
        else
            cout<<0<<" ";
    }
    cout<<"\n";
    return 0;
}