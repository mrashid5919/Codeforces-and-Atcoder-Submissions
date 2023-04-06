#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,s1,s2,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>s1>>s2;
        vector<pair<long long,long long> > vect;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            vect.push_back(make_pair(ara[i],i+1));
        }
        vector<long long> a,b;
        sort(vect.begin(),vect.end(),greater<>());
        for(i=0;i<n;i++)
        {
            if(vect[i].first*s1*(a.size()+1)<=vect[i].first*s2*(b.size()+1))
                a.push_back(vect[i].second);
            else
                b.push_back(vect[i].second);
        }
        cout<<a.size()<<" ";
        for(i=0;i<a.size();i++)
            cout<<a[i]<<" ";
        cout<<"\n";
        cout<<b.size()<<" ";
        for(i=0;i<b.size();i++)
            cout<<b[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
