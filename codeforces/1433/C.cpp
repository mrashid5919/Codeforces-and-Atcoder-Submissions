#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i;
    static long long ara[300003],p[300003];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            p[i]=ara[i];
        }
        sort(p,p+n);
        if(p[0]==p[n-1])
        {
            cout<<"-1"<<"\n";
            continue;
        }
        for(i=0;i<n;i++)
        {
            if(ara[i]==p[n-1] && ara[i]>ara[i-1] && i!=0)
            {
                cout<<i+1<<"\n";
                break;
            }
            if(ara[i]==p[n-1] && ara[i]>ara[i+1] && i!=(n-1))
            {
                cout<<i+1<<"\n";
                break;
            }
        }
    }
    return 0;
}
