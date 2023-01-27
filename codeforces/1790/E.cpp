#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if((2*n)%4==0)
        {
            x=(2*n)/4;
            if((x^(3*x))==n)
                cout<<x<<" "<<3*x<<"\n";
            else
                cout<<-1<<"\n";
        }
        else
            cout<<-1<<"\n";
    }
    return 0;
}
