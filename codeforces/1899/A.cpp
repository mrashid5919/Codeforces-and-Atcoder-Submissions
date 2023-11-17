#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%3==0)
            cout<<"Second\n";
        else
            cout<<"First\n";
    }
    return 0;
}