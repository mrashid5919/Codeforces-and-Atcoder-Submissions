#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int ara[10],i;
    for(i=0;i<4;i++)
        cin>>ara[i];
    sort(ara,ara+4);
    cout<<ara[0]<<"\n";
    return 0;
}
