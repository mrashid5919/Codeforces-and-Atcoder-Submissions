#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,n,s,e,i,p,s0,e0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        p=0;
        for(i=0;i<n;i++)
        {
            if(i==0)
                cin>>s0>>e0;
            else
            {
                cin>>s>>e;
                if(s>=s0 && e>=e0)
                    p=1;
            }
        }
        if(p==1)
            cout<<-1<<"\n";
        else
            cout<<s0<<"\n";
    }
    return 0;
}