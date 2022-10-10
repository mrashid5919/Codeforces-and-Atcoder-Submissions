#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,l,r;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        if(l%2==0)
        {
            if(r%2==0)
                cout<<l+(r-l)/2<<"\n";
            else
                cout<<(-1)*(1+(r-l)/2)<<"\n";
        }
        else if(r%2==1)
            cout<<(-1)*(l+(r-l)/2)<<"\n";
        else
            cout<<1+(r-l)/2<<"\n";
    }
    return 0;
}
