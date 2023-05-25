#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,x,k;
    cin>>t;
    while(t--)
    {
        cin>>x>>k;
        if(x%k==0)
        {
            cout<<2<<"\n";
            if(x<0)
                cout<<x-1<<" "<<1<<"\n";
            else
                cout<<x+1<<" "<<-1<<"\n";
        }
        else
        {
            cout<<1<<"\n"<<x<<"\n";
        }
    }
    return 0;
}
