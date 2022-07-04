#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==1)
        {
            cout<<-1<<"\n";
            continue;
        }
        else
            cout<<0<<" "<<0<<" "<<n/2<<"\n";
    }
    return 0;
}
