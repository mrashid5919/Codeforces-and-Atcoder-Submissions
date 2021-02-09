#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int x,y;
    cin>>x>>y;
    if(max(x,y)-min(x,y)<3)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
