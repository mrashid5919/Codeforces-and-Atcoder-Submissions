#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,d,k;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        d=0;
        k=0;
        map<pair<int,int>, int> mp;
        for(i=0;i<n;i++)
        {
            if(s[i]=='D')
                d++;
            else
                k++;
            if(d==0)
                cout<<k<<" ";
            else if(k==0)
                cout<<d<<" ";
            else
            {
                int x=__gcd(d,k);
                mp[make_pair(d/x,k/x)]++;
                cout<<mp[{d/x,k/x}]<<" ";
                //cout<<"\n";
                //cout<<d<<" "<<k<<"\n";
            }
        }
        cout<<"\n";
    }
    return 0;
}
