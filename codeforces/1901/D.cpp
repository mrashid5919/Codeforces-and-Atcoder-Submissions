#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[300005],m[300005];

int main()
{
    fastio;
    long long n,i,mx=0,ans=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>ara[i];
    }
    multiset<long long> ms;
    for(i=0;i<n;i++)
    {
        m[i]=ara[i]+i;
        ans=max(ans,m[i]);
        ms.insert(m[i]);
    }
    //cout<<ans<<"\n";
    for(i=1;i<n;i++)
    {
        ms.erase(ms.find(m[i]));
        ms.insert(ara[i]);
        ms.erase(ms.find(ara[i-1]));
        if(n%2==1)
        {
            if(i<=n/2)
                ms.insert(ara[i-1]+n/2+abs(n/2-i+1));
            else
                ms.insert(ara[i-1]+n-1-(i-1));
        }
        else
        {
            if(i-1<n/2)
                ms.insert(ara[i-1]+(n/2-1-i+1)+n/2);
            else
                ms.insert(ara[i-1]+n-1-(i-1));
        }
        // if(i==0)
        //     cout<<*(ms.rbegin())<<"\n";
        ans=min(ans,*(ms.rbegin()));
    }
    // if(n%2==1)
    // {
    //     for(i=0;i<n;i++)
    //     {
    //         mx=max(mx,ara[i]+n/2+abs(n/2-i));
    //     }
    //         //mx=max(mx,ara[i]+n/2+abs(n/2-i));
    // }
    // else
    // {
    //     for(i=0;i<n/2;i++)
    //         mx=max(mx,ara[i]+(n/2-1-i)+n/2);
    //     for(i=n/2;i<n;i++)
    //         mx=max(mx,ara[i]+i);
    // }
    // cout<<mx<<"\n";
    cout<<ans<<"\n";
    return 0;
}