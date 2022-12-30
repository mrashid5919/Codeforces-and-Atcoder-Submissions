#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long l[200005],r[200005];

int main()
{
    fastio;
    long long t,n,i,mn;
    cin>>t;
    while(t--)
    {
        mn=INT_MAX;
        cin>>n;
        vector<pair<long long,long long> > vect;
        for(i=0;i<n;i++)
        {
            cin>>l[i]>>r[i];
            vect.push_back(make_pair(l[i],r[i]));
        }
        sort(vect.begin(),vect.end());
        vector<long long> x,y;
        for(i=0;i<n;i++)
        {
            x.push_back(vect[i].first);
            y.push_back(vect[i].second);
        }
        vector<pair<long long,long long> > vect2;
        for(i=0;i<n;i++)
            vect2.push_back(make_pair(y[i],i));
        sort(vect2.begin(),vect2.end());
        vector<long long> z;
        for(i=0;i<n;i++)
            z.push_back(vect2[i].first);
        vector<long long>::iterator upper,lower;
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                upper=upper_bound(x.begin(),x.end(),vect[i].second);
                if(upper==x.end())
                {
                    mn=0;
                    break;
                }
                else
                {
                    mn=n-(upper-x.begin());
                }
            }
            else if(i==n-1)
            {
                lower=lower_bound(z.begin(),z.end(),vect[i].first);
                if(lower==z.begin())
                {
                    mn=0;
                    break;
                }
                else
                {
                    long long p=lower-z.begin();
                    mn=min(mn,p);
                }
            }
            else
            {
                lower=lower_bound(z.begin(),z.end(),vect[i].first);
                upper=upper_bound(x.begin(),x.end(),vect[i].second);
                long long p=lower-z.begin();
                if(upper==x.end())
                    mn=min(mn,p);

                else
                    mn=min(mn,p+(n-(upper-x.begin())));
            }
        }
        cout<<mn<<"\n";
    }
}
