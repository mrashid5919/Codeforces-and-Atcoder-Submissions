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
        if(n%2==0)
            cout<<"Sakurako\n";
        else
            cout<<"Kosuke\n";
    }
    return 0;
}