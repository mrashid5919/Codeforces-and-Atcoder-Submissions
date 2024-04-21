#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int t,n,i,ara[105],ans;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>n;
        map<int,int> mp;
        for(i=0;i<n;i++){
            cin>>ara[i];
            mp[ara[i]]++;
        }
        for(i=1;i<=100;i++)
        {
            ans+=mp[i]/3;
        }
        cout<<ans<<"\n";
    }
    return 0;
}