#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,x,y,i,cnt;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>n>>x>>y;
        for(i=0;i<x;i++)
            cin>>ara[i];
        sort(ara,ara+x);
        if(ara[1]-ara[0]==2)
            cnt++;
        cnt+=x-2;
        for(i=2;i<x;i++)
        {
            if(ara[i]-ara[i-1]==2)
                cnt++;
        }
        if(ara[0]+n-ara[x-1]==2)
            cnt++;
        cout<<cnt<<"\n";
    }
    return 0;
}