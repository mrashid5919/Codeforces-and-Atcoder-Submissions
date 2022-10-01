#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,q,l,s,t,i,j,x;
    cin>>n>>q;

    vector<long long> vect[n+5];
    for(i=0;i<n;i++)
    {
        cin>>l;
        for(j=0;j<l;j++)
        {
            cin>>x;
            vect[i].push_back(x);
        }
    }
    while(q--)
    {
        cin>>s>>t;
        cout<<vect[s-1][t-1]<<"\n";
    }
    return 0;
}
