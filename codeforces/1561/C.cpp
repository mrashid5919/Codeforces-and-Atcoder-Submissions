#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long k[100005],ara[100005];

int main()
{
    fastio;
    long long t,n,i,j,mn,en,x;
    cin>>t;
    while(t--)
    {
        vector<pair<long long,long long> > vect;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>k[i];
            for(j=0;j<k[i];j++)
            {
                cin>>x;
                if(j==0)
                    ara[i]=x+1;
                else
                    ara[i]=max(ara[i],x+1-j);
            }
            vect.push_back({ara[i],k[i]});
        }
        sort(vect.begin(),vect.end());
        // for(i=0;i<n;i++)
        //     cout<<vect[i].first<<" "<<vect[i].second<<"\n";
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                mn=vect[i].first;
                en=vect[i].first+vect[i].second;
            }
            else
            {
                if(en<vect[i].first)
                {
                    mn+=vect[i].first-en;
                    en=vect[i].first;
                }
                en+=vect[i].second;
            }
        }
        cout<<mn<<"\n";
    }
    return 0;
}