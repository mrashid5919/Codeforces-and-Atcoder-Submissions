#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005],temp[200005];

int main()
{
    fastio;
    long long t,n,k,i,mx,l,r;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        map<long long,long long> mp;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            mp[ara[i]]++;
        }
        sort(ara,ara+n);
        vector<long long> vect;
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                if(mp[ara[i]]>=k)
                    vect.push_back(ara[i]);
            }
            else if(ara[i]!=ara[i-1] && mp[ara[i]]>=k)
                vect.push_back(ara[i]);
        }
        if(vect.size()==0)
        {
            cout<<-1<<"\n";
            continue;
        }
        l=vect[0];
        r=vect[0];
        mx=0;
        long long temp=vect[0];
        for(i=1;i<vect.size();i++)
        {
            if(vect[i]==vect[i-1]+1)
            {
                if(vect[i]-temp>mx)
                {
                    l=temp;
                    r=vect[i];
                    mx=vect[i]-temp;
                }
            }
            else
            {
                temp=vect[i];
            }
        }
        cout<<l<<" "<<r<<"\n";
    }
    return 0;
}
