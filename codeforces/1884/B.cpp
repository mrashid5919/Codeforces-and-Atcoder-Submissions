#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,n,i,ze,on,ans;
    string s;
    cin>>t;
    while(t--)
    {
        ans=0;
        ze=0;
        on=0;
        cin>>n;
        cin>>s;
        vector<long long> zpos;
        for(i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                ze++;
                zpos.push_back(n-i);
            }
            else
            {
                on++;
            }
        }
        sort(zpos.begin(),zpos.end());
        long long idx=0;
        for(i=1;i<=n;i++)
        {
            if(i>ze)
            {
                cout<<-1<<" ";
                continue;
            }
            if(s[n-i]=='0')
            {
                cout<<0<<" ";
                continue;
            }
            vector<long long>::iterator it;
            it=upper_bound(zpos.begin(),zpos.end(),i);
            if(it!=zpos.end())
            {
                ans+=*(it)-i;
                cout<<ans<<" ";
                s[n-*(it)]='1';
                //if(i==1)
                    //cout<<s[2]<<"\n";
                zpos.erase(it);
            }
            else
                cout<<-1<<" ";
        }
        cout<<"\n";
    }
    return 0;
}