#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int ara[10];
    for(int i=0;i<3;i++)
        cin>>ara[i];
    sort(ara,ara+3);
    cout<<ara[2]+ara[1]<<"\n";
    return 0;
}