#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,m,i,j,mn;
    cin>>t;
    while(t--)
    {
        mn=INT_MAX;
        cin>>n>>m;
        long long col[m+5],row[n+5],tot[n+5][m+5];
        char ara[n+5][m+5];
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
                cin>>ara[i][j];
        }
        for(i=0;i<n;i++)
        {
            row[i]=0;
            for(j=0;j<m;j++)
            {
                if(ara[i][j]=='.')
                    row[i]++;
            }
        }
        for(j=0;j<m;j++)
        {
            col[j]=0;
            for(i=0;i<n;i++)
            {
                if(ara[i][j]=='.')
                    col[j]++;
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                tot[i][j]=row[i]+col[j];
                if(ara[i][j]=='.')
                    tot[i][j]--;
                mn=min(mn,tot[i][j]);
            }
        }
        cout<<mn<<"\n";
    }
    return 0;
}
