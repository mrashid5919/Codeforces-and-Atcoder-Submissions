#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int n,t,p=0,c,tt,mn;
    cin>>n>>t;
    while(n--)
    {
        cin>>c>>tt;
        if(tt<=t)
        {
            if(p==0)
            {
                mn=c;
                p=1;
            }
            else
            {
                mn=min(mn,c);
            }
        }
    }
    if(p==0)
        cout<<"TLE\n";
    else
        cout<<mn<<"\n";
    return 0;
}