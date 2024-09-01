#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005];

//char ara[1005][1005];

int main()
{
    fastio;
    vector<long long> sm;
    sm.push_back(0);
    for(long long i=1;;i++)
    {
        sm.push_back(sm[i-1]+i);
        if(sm[i]>1000000000)
            break;
    }
    long long t,n,l,r,i;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        vector<long long>::iterator it;
        it=lower_bound(sm.begin(),sm.end(),r-l);
        if(*it==r-l)
            cout<<(it-sm.begin()+1)<<"\n";
        else
            cout<<it-sm.begin()<<"\n";
    }
    return 0;
}