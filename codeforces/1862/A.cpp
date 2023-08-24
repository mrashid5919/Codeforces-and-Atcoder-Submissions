#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int t,n,m,i,j,p;
    char ara[30][30];
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
                cin>>ara[i][j];
        }
        p=0;
        for(j=0;j<m;j++)
        {
            for(i=0;i<n;i++)
            {
                if(p==0 && ara[i][j]=='v')
                {
                    p++;
                    break;
                }
                if(p==1 && ara[i][j]=='i')
                {
                    p++;
                    break;
                }
                if(p==2 && ara[i][j]=='k')
                {
                    p++;
                    break;
                }
                if(p==3 && ara[i][j]=='a')
                {
                    p++;
                    break;
                }
            }
        }
        if(p==4)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}