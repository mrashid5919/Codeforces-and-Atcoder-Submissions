#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int i,ara[15];
    for(i=0;i<=9;i++)
        cin>>ara[i];
    cout<<ara[ara[ara[0]]];
    return 0;
}
