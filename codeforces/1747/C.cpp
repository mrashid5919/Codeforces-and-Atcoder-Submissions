#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,mn,x,z;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>x;
            if(i==0)
            {
                z=x;
                mn=x;
            }
            else
                mn=min(mn,x);
        }
        if(z==mn)
            cout<<"Bob"<<"\n";
        else
            cout<<"Alice"<<"\n";
    }
    return 0;
}
