#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,k,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector<long long> a,b;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
        }
        for(i=0;i<n;i++)
        {
            if(ara[i]==ara[0])
                a.push_back(i);
            if(ara[i]==ara[n-1])
                b.push_back(i);
        }
        if(ara[0]==ara[n-1])
        {
            if(a.size()>=k)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else
        {
            if(a.size()<k || b.size()<k)
            {
                cout<<"NO\n";
                continue;
            }
            if(a[k-1]<b[b.size()-k])
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    return 0;
}