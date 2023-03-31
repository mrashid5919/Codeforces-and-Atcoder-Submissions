#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[100005];

int main()
{
    fastio;
    long long t,n,c,d,i,x,mn,ms;
    cin>>t;
    while(t--)
    {
        mn=10000000000000000;
        cin>>n>>c>>d;
        for(i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n);
        vector<long long> vect;
        vect.push_back(ara[0]);
        for(i=1;i<n;i++)
        {
            if(ara[i]!=ara[i-1])
                vect.push_back(ara[i]);
        }
        x=vect.size();
        ms=(n-x)*c;
        for(i=0;i<x;i++)
        {
            long long cur=ms;
            cur+=(x-1-i)*c+(vect[i]-1-i)*d;
            mn=min(mn,cur);
        }
        mn=min(mn,ms+x*c+d);
        cout<<mn<<"\n";
    }
    return 0;
}
