#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,pos,neg,zer,j,k,p;
    cin>>t;
    while(t--)
    {
        cin>>n;
        pos=0;
        neg=0;
        zer=0;
        p=0;
        map<long long,long long> mp;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(ara[i]>0)
                pos++;
            else if(ara[i]<0)
                neg++;
            else
                zer++;
            mp[ara[i]]++;
        }
        if(pos>2 || neg>2)
        {
            cout<<"NO\n";
            continue;
        }
        sort(ara,ara+n);
        vector<long long> vect;
        for(i=0;i<n;i++)
        {
            if(ara[i]<0)
                vect.push_back(ara[i]);
            if(ara[i]>0)
                vect.push_back(ara[i]);
        }
        if(zer>0)
            vect.push_back(0LL);
        if(zer>1)
            vect.push_back(0LL);
        for(i=0;i<vect.size();i++)
        {
            for(j=i+1;j<vect.size();j++)
            {
                for(k=j+1;k<vect.size();k++)
                {
                    if(mp[vect[i]+vect[j]+vect[k]]==0)
                        p=1;
                }
            }
        }
        if(p==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}
