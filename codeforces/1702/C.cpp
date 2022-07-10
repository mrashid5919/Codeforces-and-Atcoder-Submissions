#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,k,i,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        map<long long,long long> posh;
        map<long long,long long> posl;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(posl[ara[i]]==0 && ara[0]!=ara[i])
                posl[ara[i]]=i;
            posh[ara[i]]=i;
        }
        while(k--)
        {
            cin>>a>>b;
            if(posh[b]>posl[a] && ara[posl[a]]==a)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    return 0;
}
