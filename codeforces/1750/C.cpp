#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ar[200005],br[200005];

int main()
{
    fastio;
    long long t,n,i,p,x;
    string a,b;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>a;
        cin>>b;
        p=0;
        for(i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                p=1;
                break;
            }
        }
        if(p==1)
        {
            for(i=0;i<n;i++)
            {
                if(a[i]==b[i])
                {
                    p=2;
                    break;
                }
            }
        }
        if(p==2)
        {
            cout<<"NO"<<"\n";
            continue;
        }
        cout<<"YES"<<"\n";
        vector<pair<long long,long long> > vect;
        if(b[0]=='1'){
            vect.push_back(make_pair(2LL,n));
            for(i=1;i<n;i++)
            {
                if(a[i]=='0')
                    a[i]='1';
                else
                    a[i]='0';
            }
        }
        p=0;
        for(i=1;i<n;i++)
        {
            if(p==0 && b[i]=='1')
            {
                vect.push_back(make_pair(1LL,i));
                p=1;
            }
            else if(p==1 && b[i]=='0')
            {
                vect.push_back(make_pair(1LL,i));
                p=0;
            }
        }
        if((p==0 && a[n-1]=='1' && b[n-1]=='0') || (p==1 && a[n-1]=='1' && b[n-1]=='1'))
            vect.push_back(make_pair(1LL,n));
        cout<<vect.size()<<"\n";
        for(i=0;i<vect.size();i++)
            cout<<vect[i].first<<" "<<vect[i].second<<"\n";
    }
    return 0;
}
