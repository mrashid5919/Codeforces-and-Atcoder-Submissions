#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int x,y,z;
    cin>>x>>y>>z;
    if((y*z)%x==0)
        cout<<(y*z)/x-1<<"\n";
    else
        cout<<(y*z)/x<<"\n";
    return 0;
}
