#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005],b[200005];

int main()
{
    fastio;
    long long t,n,i,cur,mx;
    cin>>t;
    while(t--)
    {
        mx=0;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        for(i=0;i<n;i++)
            cin>>b[i];
        map<long long,long long> mp1,mp2;
        if(n==1)
        {
            mp1[ara[0]]++;
            mp2[b[0]]++;
        }
        else
        {
            cur=1;
            for(i=1;i<n;i++)
            {
                if(ara[i]==ara[i-1]){
                    cur++;
                    if(i==n-1)
                        mp1[ara[i]]=max(mp1[ara[i]],cur);
                }
                else
                {
                    mp1[ara[i-1]]=max(mp1[ara[i-1]],cur);
                    cur=1;
                    if(i==n-1)
                        mp1[ara[i]]=max(mp1[ara[i]],cur);
                }
            }
            cur=1;
            for(i=1;i<n;i++)
            {
                if(b[i]==b[i-1]){
                    cur++;
                    if(i==n-1)
                        mp2[b[i]]=max(mp2[b[i]],cur);
                }
                else
                {
                    mp2[b[i-1]]=max(mp2[b[i-1]],cur);
                    cur=1;
                    if(i==n-1)
                        mp2[b[i]]=max(mp2[b[i]],cur);
                }
            }
        }
        for(i=0;i<n;i++){
            mx=max(mx,mp1[ara[i]]+mp2[ara[i]]);
            mx=max(mx,mp1[b[i]]+mp2[b[i]]);
        }
        cout<<mx<<"\n";
    }
    return 0;
}
