#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long x,y,a,b,c,i,t,p=0,q=0,r=0;
    vector<pair<long long,long long> > apples;
    cin>>x>>y>>a>>b>>c;
    for(i=0;i<a;i++)
    {
        cin>>t;
        apples.push_back(make_pair(t,0LL));
    }
    for(i=0;i<b;i++)
    {
        cin>>t;
        apples.push_back(make_pair(t,1LL));
    }
    for(i=0;i<c;i++)
    {
        cin>>t;
        apples.push_back(make_pair(t,2LL));
    }
    sort(apples.begin(),apples.end(),greater<>());
    /*for(i=0;i<apples.size();i++)
        cout<<apples[i].first<<" "<<apples[i].second<<"\n";*/
    vector<long long> vect;
    for(i=0;i<x+y;i++)
    {
        if(apples[i].second==0){
            p++;
            if(p<=x)
                vect.push_back(apples[i].first);
        }
        else if(apples[i].second==1){
            q++;
            if(q<=y)
                vect.push_back(apples[i].first);
        }
        else
            r++;
    }
    if(r>=x-min(p,x)+y-min(q,y))
    {
        for(i=0;i<x+y;i++)
        {
            if(r==0)
                break;
            else if(apples[i].second==2)
            {
                vect.push_back(apples[i].first);
                r--;
            }
        }
    }
    else
    {
        long long temp=x-min(p,x)+y-min(q,y)-r;
        for(i=x+y;i<apples.size();i++)
        {
            if(temp==0)
                break;
            if(apples[i].second==0 && p<x)
            {
                vect.push_back(apples[i].first);
                p++;
                temp--;
            }
            if(apples[i].second==1 && q<y)
            {
                vect.push_back(apples[i].first);
                q++;
                temp--;
            }
        }
        int g=0;
        for(i=x+y;i<apples.size();i++)
        {
            if(apples[i].second==2 && apples[i].first>vect[vect.size()-1-g])
            {
                vect.erase(vect.begin()+vect.size()-1-g);
                vect.push_back(apples[i].first);
                g++;
            }
        }
        for(i=0;i<x+y;i++)
        {
            if(apples[i].second==2)
                vect.push_back(apples[i].first);
        }
    }
    long long ans=0LL;
    for(i=0;i<vect.size();i++){
        //cout<<vect[i]<<" ";
        ans+=vect[i];
    }
    cout<<ans<<"\n";
    return 0;
}
