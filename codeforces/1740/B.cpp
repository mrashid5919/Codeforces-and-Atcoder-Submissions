#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,sum,x,y;
    cin>>t;
    while(t--)
    {
        sum=0;
        vector<pair<long long,long long> > vect;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>x>>y;
            vect.push_back(make_pair(max(x,y),min(x,y)));
        }
        sort(vect.begin(),vect.end());
        for(i=0;i<n;i++)
        {
            if(i==0)
                sum+=2*vect[i].second+vect[i].first;
            else
                sum+=2*vect[i].second+vect[i].first-vect[i-1].first;
            if(i==n-1)
                sum+=vect[i].first;
        }
        cout<<sum<<"\n";
    }
    return 0;
}
