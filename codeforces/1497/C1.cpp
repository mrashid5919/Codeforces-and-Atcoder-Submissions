#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(n%4==0)
            cout<<n/2<<" "<<n/4<<" "<<n/4<<"\n";
        else if(n%2==0)
            cout<<2<<" "<<(n-2)/2<<" "<<(n-2)/2<<"\n";
        else
            cout<<1<<" "<<(n-1)/2<<" "<<(n-1)/2<<"\n";
    }
    return 0;
}
