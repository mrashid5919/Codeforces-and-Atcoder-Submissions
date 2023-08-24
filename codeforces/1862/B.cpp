#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        vector<long long> vect;
        vect.push_back(ara[0]);
        for(i=1;i<n;i++)
        {
            if(ara[i]>=ara[i-1])
                vect.push_back(ara[i]);
            else
            {
                vect.push_back(ara[i]);
                vect.push_back(ara[i]);
            }
        }
        cout<<vect.size()<<"\n";
        for(i=0;i<vect.size();i++)
            cout<<vect[i]<<" ";
        cout<<"\n";
    }
    return 0;
}