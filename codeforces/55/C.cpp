#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int n,m,c,p=0,x,y;
    cin>>n>>m>>c;
    while(c--)
    {
        cin>>x>>y;
        if(x-1<=4 || n-x<=4 || y-1<=4 || m-y<=4)
            p=1;
    }
    if(p==1)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}