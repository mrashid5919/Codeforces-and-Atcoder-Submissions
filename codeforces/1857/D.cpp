#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005],b[200005],df[200005];

int main()
{
    fastio;
    long long t,n,i,mx;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        for(i=0;i<n;i++)
            cin>>b[i];
        for(i=0;i<n;i++)
        {
            df[i]=ara[i]-b[i];
            if(i==0)
                mx=df[i];
            else
                mx=max(mx,df[i]);
        }
        vector<long long> vect;
        for(i=0;i<n;i++)
        {
            if(df[i]==mx)
                vect.push_back(i+1);
        }
        cout<<vect.size()<<"\n";
        for(i=0;i<vect.size();i++)
            cout<<vect[i]<<" ";
        cout<<"\n";
    }
    return 0;
}