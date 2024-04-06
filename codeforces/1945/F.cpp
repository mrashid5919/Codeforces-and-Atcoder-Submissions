#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005],perm[200005],mark[200005],mp[200005];

int main()
{
    fastio;
    long long t,n,i,mx,cnt,cur;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            mark[i]=0;
            mp[i]=0;
            cin>>ara[i];
        }
        for(i=0;i<n;i++)
            cin>>perm[i];
        vector<pair<long long,long long> > vect;
        for(i=0;i<n;i++)
            vect.push_back(make_pair(ara[i],i));
        sort(vect.begin(),vect.end());
        mx=vect[n-1].first;
        cnt=1;
        cur=n-1;
        mp[vect[n-1].second]=1;
        //cout<<mx<<endl;
        for(i=0;i<n-1;i++)
        {
            mark[perm[i]-1]=1;
            if(mp[perm[i]-1]==0)
            {
                cur--;
                if(cur<0)
                    break;
                while(mark[vect[cur].second]==1){
                    cur--;
                    if(cur<0)
                        break;
                }
                if(cur<0)
                    break;
                mp[vect[cur].second]=1;
                if(vect[cur].first*(i+2)>mx)
                {
                    mx=vect[cur].first*(i+2);
                    cnt=i+2;
                }
            }
            else
            {
                mp[perm[i]-1]=0;
                cur--;
                if(cur<0)
                    break;
                while(mark[vect[cur].second]==1){
                    cur--;
                    if(cur<0)
                        break;
                }
                if(cur<0)
                    break;
                mp[vect[cur].second]=1;
                cur--;
                if(cur<0)
                    break;
                while(mark[vect[cur].second]==1){
                    cur--;
                    if(cur<0)
                        break;
                }
                if(cur<0)
                    break;
                mp[vect[cur].second]=1;
                if(vect[cur].first*(i+2)>mx)
                {
                    mx=vect[cur].first*(i+2);
                    cnt=i+2;
                }
            }
            // if(i==0)
            //     cout<<mx<<endl;
        }
        cout<<mx<<" "<<cnt<<"\n";
    }
    return 0;
}