#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

char ara[1005][1005];

int main()
{
    fastio;
    long long t,n,k,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>ara[i][j];
            }
        }
        for(i=0;i<n;i+=k)
        {
            for(j=0;j<n;j+=k)
            {
                cout<<ara[i][j];
            }
            cout<<"\n";
        }
    }
    return 0;
}