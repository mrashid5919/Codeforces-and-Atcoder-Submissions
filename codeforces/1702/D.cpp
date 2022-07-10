#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long check[200005];

int main()
{
    fastio;
    long long t,n,p,sum,i;
    cin>>t;
    while(t--)
    {
        string s;
        sum=0;
        cin>>s;
        cin>>p;
        n=s.size();
        for(i=0;i<n;i++)
            check[i]=0;
        vector<pair<long long, long long> > vect;
        for(i=0;i<n;i++)
        {
            long long tmp=s[i]-'a'+1;
            sum+=tmp;
            vect.push_back(make_pair(tmp,i));
        }
        if(sum<=p)
        {
            cout<<s<<"\n";
            continue;
        }
        sort(vect.begin(),vect.end());
        if(vect[0].first>p)
        {
            cout<<"\n";
            continue;
        }
        for(i=n-1;i>=0;i--)
        {
            check[vect[i].second]=1;
            sum-=vect[i].first;
            if(sum<=p)
                break;
        }
        for(i=0;i<n;i++)
        {
            if(check[i]==0)
                cout<<s[i];
        }
        cout<<"\n";
    }
    return 0;
}
