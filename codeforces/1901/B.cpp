#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,cnt;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cnt=0;
        for(i=0;i<n;i++)
            cin>>ara[i];
        cnt=ara[0]-1;
        for(i=1;i<n;i++)
        {
            if(ara[i]>ara[i-1])
                cnt+=ara[i]-ara[i-1];
        }
        cout<<cnt<<"\n";
    }
    return 0;
}