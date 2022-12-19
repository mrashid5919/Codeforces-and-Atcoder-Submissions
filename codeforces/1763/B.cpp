#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long h[200005],p[200005],sf[200005];

int main()
{
    fastio;
    long long t,n,k,i,sm,flag,mn;
    cin>>t;
    while(t--)
    {
        flag=0;
        sm=0;
        cin>>n>>k;
        for(i=0;i<n;i++)
            cin>>h[i];
        for(i=0;i<n;i++)
            cin>>p[i];
        vector<pair<long long,long long> > vect;
        for(i=0;i<n;i++)
            vect.push_back(make_pair(h[i],p[i]));
        sort(vect.begin(),vect.end());
        for(i=n-1;i>=0;i--)
        {
            if(i==n-1)
            {
                sf[i]=vect[i].second;
                mn=vect[i].second;
            }
            else
            {
                if(vect[i].second<mn)
                {
                    mn=vect[i].second;
                }
                sf[i]=mn;
            }
        }
        vector<long long> x;
        for(i=0;i<n;i++)
            x.push_back(vect[i].first);
        while(true)
        {
            if(k>0)
            {
                sm+=k;
                vector<long long>::iterator it;
                it=upper_bound(x.begin(),x.end(),sm);
                if(it==x.end())
                    break;
                k-=sf[(it-x.begin())];
            }
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<"NO"<<"\n";
        else
            cout<<"YES"<<"\n";
    }
    return 0;
}
