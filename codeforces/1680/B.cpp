#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,m,i,j,up[50],left[50],p,r,mu,ml;
    char ara[20][20];
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        r=0;
        p=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>ara[i][j];
                if(ara[i][j]=='R')
                {
                    up[r]=i;
                    left[r]=j;
                    r++;
                }
            }
        }
        for(i=0;i<r;i++)
        {
            p=0;
            for(j=0;j<r;j++)
            {
                if(up[j]<up[i] || left[j]<left[i])
                {
                    p=1;
                    break;
                }
            }
            if(p==0)
                break;
        }
        if(p==0)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
    return 0;
}
