#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,s,p,q,i,cnt;
    char ch;
    map<long long,long long> mpb,mps;
    cin>>n>>s;
    for(i=0; i<n; i++)
    {
        cin>>ch>>p>>q;
        if(ch=='B')
            mpb[p]+=q;
        else
            mps[p]+=q;
    }
    map<long long,long long>::iterator it;
    vector<pair<long long,long long> > vect,vect2;
    if(!mps.empty())
    {
        for(it=mps.begin(); it!=mps.end(); it++)
            vect.push_back({it->first,it->second});
        long long x;
        if(vect.size()<s)
            x=vect.size();
        else
            x=s;
        for(i=x-1; i>=0; i--)
        {
            cout<<"S "<<vect[i].first<<" "<<vect[i].second<<"\n";
        }
    }
    cnt=0;
    if(!mpb.empty())
    {
        for(it=mpb.begin(); it!=mpb.end(); it++)
        {
            vect2.push_back({(it->first),(it->second)});
        }
        for(i=vect2.size()-1; i>=0; i--)
        {
            cout<<"B "<<vect2[i].first<<" "<<vect2[i].second<<"\n";
            cnt++;
            if(cnt==s)
                break;
        }
    }
    return 0;
}