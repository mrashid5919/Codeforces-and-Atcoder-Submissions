#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[100005];

int main()
{
    fastio;
    long long n,k,i,l=-1,r=-1,dist=0,ansl,ansr;
    cin>>n>>k;
    for(i=0;i<n;i++)
        cin>>ara[i];
    map<long long,long long> mp;
    for(i=0;i<n;i++)
    {
        mp[ara[i]]++;
        if(mp[ara[i]]==1)
            dist++;
        if(dist==k)
        {
            if(l==-1)
            {
                l=1;
                r=i+1;
                ansl=l;
                ansr=r;
            }
            else
            {
                ansl=l;
                ansr=i+1;
            }
            while(dist==k && l-1<=i)
            {
                if(mp[ara[l-1]]==1)
                {
                    mp[ara[l-1]]--;
                    l++;
                    dist--;
                }
                else
                {
                    mp[ara[l-1]]--;
                    l++;
                    ansl=l;
                }
            }
        }
    }
    if(l==-1)
        cout<<-1<<" "<<-1<<"\n";
    else
        cout<<ansl<<" "<<ansr<<"\n";
    return 0;
}