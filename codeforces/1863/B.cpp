#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[100005],pos[100005];

int main()
{
    fastio;
    long long t,n,i,cnt=0;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            pos[ara[i]]=i;
        }
        for(i=2;i<=n;i++)
        {
            if(pos[i]<pos[i-1])
                cnt++;
        }
        cout<<cnt<<"\n";
    }
    
    return 0;
}