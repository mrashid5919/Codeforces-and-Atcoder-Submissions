#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,l[1005],r[1005],i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>l[i]>>r[i];
        vector<pair<long long,long long> > vect;
        vector<pair<long long,long long> > vect1;
        for(i=0;i<n;i++)
            vect.push_back(make_pair(l[i],r[i]));
        vect1.push_back(make_pair(1LL,n));
        while(vect.size()!=0)
        {
            for(i=0;i<vect.size();i++)
            {
                if(vect[i].first==vect1[0].first && vect[i].second==vect1[0].second){
                    vect.erase(vect.begin()+i);
                    break;
                }
            }
            for(i=vect1[0].first;i<=vect1[0].second;i++)
            {
                int p=0;
                for(j=0;j<vect.size();j++)
                {
                    if(i>=vect[j].first && i<=vect[j].second)
                    {
                        p=1;
                        break;
                    }
                }
                if(p==0)
                {
                    cout<<vect1[0].first<<" "<<vect1[0].second<<" "<<i<<"\n";
                    if(vect1[0].first!=vect1[0].second)
                    {
                        if(vect1[0].first!=i)
                            vect1.push_back(make_pair(vect1[0].first,i-1));
                        if(vect1[0].second!=i)
                            vect1.push_back(make_pair(i+1,vect1[0].second));
                    }
                    vect1.erase(vect1.begin());
                    break;
                }
            }
        }
    }
    return 0;
}
