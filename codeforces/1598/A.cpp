#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,j,p;
    char ara[5][150];
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n;
        for(i=0;i<2;i++)
        {
            for(j=0;j<n;j++)
                cin>>ara[i][j];
        }
        for(i=0;i<n;i++)
        {
            if(ara[0][i]=='1' && ara[1][i]=='1')
            {
                p=1;
                break;
            }
        }
        if(p==1)
            cout<<"NO"<<"\n";
        else
            cout<<"YES"<<"\n";
    }
    return 0;
}
