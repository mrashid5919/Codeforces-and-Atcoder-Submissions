#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int x,y;
    cin>>x>>y;
    if(x==y)
        cout<<x<<"\n";
    else if(x+y==1)
        cout<<2<<"\n";
    else if(x+y==2)
        cout<<1<<"\n";
    else
        cout<<0<<"\n";
    return 0;
}
