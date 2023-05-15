#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long power(long long x,long long y)
{
    long long u=1;
    for(long long i=0;i<y;i++)
        u*=x;
    return u;
}

int main()
{
    fastio;
    long long t,p,q,i,cnt,tmp,mn;
    cin>>t;
    while(t--)
    {
        mn=1000000000000000000;
        cin>>p>>q;
        if(p%q!=0)
            cout<<p<<"\n";
        else
        {
            vector<pair<long long,long long> > vect;
            for(i=2;i*i<=q;i++)
            {
                if(q==1)
                    break;
                cnt=0;
                while(q%i==0)
                {
                    cnt++;
                    q/=i;
                }
                if(cnt>0)
                    vect.push_back(make_pair(i,cnt));
            }
            if(q!=1)
                vect.push_back(make_pair(q,1LL));
            for(i=0;i<vect.size();i++)
            {
                tmp=p;
                cnt=0;
                while(tmp%vect[i].first==0)
                {
                    cnt++;
                    tmp/=vect[i].first;
                }
                mn=min(mn,power(vect[i].first,cnt-vect[i].second+1));
                //cout<<mn<<"\n";
            }
            cout<<p/mn<<"\n";
        }
    }
    return 0;
}
