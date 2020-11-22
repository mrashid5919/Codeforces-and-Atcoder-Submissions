#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ara[4][4],i,j,ans;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            cin>>ara[i][j];
    }
    ans=ara[0][0]*ara[1][1]-ara[0][1]*ara[1][0];
    cout<<ans<<"\n";
    return 0;
}
