#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int ara[5],i;
    for(i=0;i<3;i++)
        cin>>ara[i];
    sort(ara,ara+3);
    if(ara[1]-ara[0]==ara[2]-ara[1])
        cout<<"Yes"<<"\n";
    else
        cout<<"No"<<"\n";
    return 0;
}