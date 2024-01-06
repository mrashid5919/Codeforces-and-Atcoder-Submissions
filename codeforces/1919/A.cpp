#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a%2==b%2)
            cout<<"Bob\n";
        else
            cout<<"Alice\n";
    }
    return 0;
}