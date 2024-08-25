#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%4==0)
            cout<<n/4<<"\n";
        else
            cout<<1+n/4<<"\n";
    }
    return 0;
}