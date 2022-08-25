#include <bits/stdc++.h>
using namespace std;

int ara[100005],cnt[100005];

int main() {
    int n,m,i,x;
    cin>>n>>m;
    for(i=0;i<n;i++)
        cin>>ara[i];
    map<int,int> mp;
    for(i=n-1;i>=0;i--)
    {
        if(mp[ara[i]]==0)
        {
            if(i==n-1)
                cnt[n-1]=1;
            else
                cnt[i]=cnt[i+1]+1;
            mp[ara[i]]++;
        }
        else
            cnt[i]=cnt[i+1];
    }
    for(i=0;i<m;i++)
    {
        cin>>x;
        cout<<cnt[x-1]<<"\n";
    }
    return 0;
}
