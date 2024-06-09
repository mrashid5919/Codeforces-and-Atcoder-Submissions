#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,n,i,ara[100],p;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        if(ara[0]==ara[n-1])
        {
            cout<<"NO\n";
            continue;
        }
        p=0;
        cout<<"YES\n";
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                if(ara[0]==ara[n-2])
                {
                    cout<<"B";
                    p=1;
                }
                else
                    cout<<"R";
            }
            else
            {
                if(ara[i]!=ara[i-1] && p==0)
                {
                    cout<<"B";
                    p=1;
                }
                else
                    cout<<"R";
            }
        }
        cout<<"\n";
    }
    return 0;
}