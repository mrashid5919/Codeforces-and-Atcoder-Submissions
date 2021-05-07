#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,a,b,x,y,z;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(b==1)
        {
            cout<<"NO"<<"\n";
            continue;
        }
        if(b==2)
        {
            x=a;
            y=3*a;
            z=2*a*b;
        }
        else
        {
            x=a;
            y=a*(b-1);
            z=a*b;
        }
        cout<<"YES"<<"\n";
        cout<<x<<" "<<y<<" "<<z<<"\n";
    }
    return 0;
}
