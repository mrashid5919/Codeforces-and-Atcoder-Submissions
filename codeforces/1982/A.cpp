#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,x1,y1,x2,y2;
    cin>>t;
    while(t--)
    {
        cin>>x1>>y1>>x2>>y2;
        if(x1>y1 && x2>y2)
            cout<<"YES\n";
        else if(x1<y1 && x2<y2)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}