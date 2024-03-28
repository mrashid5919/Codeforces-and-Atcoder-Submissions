#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a<b && b<c)
            cout<<"STAIR\n";
        else if(a<b && b>c)
            cout<<"PEAK\n";
        else
            cout<<"NONE\n";
    }
    return 0;
}