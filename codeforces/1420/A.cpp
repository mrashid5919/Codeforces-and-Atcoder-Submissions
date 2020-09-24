#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,p;
    static long long ara[50004],s[50004],d[50004];
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            s[i]=ara[i];
            d[i]=ara[i];
        }
        sort(s,s+n);
        sort(d,d+n,greater<long long>());
        for(i=1;i<n;i++)
        {
            if(s[i]==s[i-1])
            {
                p=1;
                break;
            }
        }
        if(p==1)
        {
            cout<<"YES"<<"\n";
            continue;
        }
        for(i=0;i<n;i++)
        {
            if(ara[i]!=d[i])
            {
                p=1;
                break;
            }
        }
        if(p==1)
        {
            cout<<"YES"<<"\n";
            continue;
        }
        cout<<"NO"<<"\n";
    }
    return 0;
}
