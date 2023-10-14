#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long n,i,c[1005],p[1005],k,table[1005],m=0,s=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>c[i]>>p[i];
    vector<pair<long long,long long> > vect;
    for(i=0;i<n;i++)
        vect.push_back(make_pair(p[i],i));
    cin>>k;
    for(i=0;i<k;i++)
        cin>>table[i];
    vector<pair<long long,long long> > vect2;
    for(i=0;i<k;i++)
        vect2.push_back(make_pair(table[i],i));
    sort(vect.begin(),vect.end());
    sort(vect2.begin(),vect2.end());
    vector<long long> t;
    for(i=0;i<k;i++)
        t.push_back(vect2[i].first);
    vector<pair<long long,long long> > ans;
    vector<long long>::iterator it;
    for(i=n-1;i>=0;i--)
    {
        it=lower_bound(t.begin(),t.end(),c[vect[i].second]);
        if(it!=t.end())
        {
            m++;
            s+=vect[i].first;
            long long idx=(it-t.begin());
            ans.push_back(make_pair(vect[i].second+1,vect2[idx].second+1));
            vect2.erase(vect2.begin()+idx);
            t.erase(it);
        }
    }
    cout<<m<<" "<<s<<"\n";
    for(i=0;i<ans.size();i++)
        cout<<ans[i].first<<" "<<ans[i].second<<"\n";
}