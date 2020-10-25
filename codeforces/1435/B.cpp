#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,m,i,j,s,p,q;
    static long long a[504][504],b[504][504],c[504][504];
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n>>m;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
                cin>>a[i][j];
        }
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=n;j++)
                cin>>b[i][j];
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(a[i][1]==b[j][1])
                {
                    s=i;
                    q=j;
                    p=1;
                    break;
                }
            }
            if(p==1)
                break;
        }
        for(i=1;i<=m;i++)
            c[1][i]=a[s][i];
        for(i=1;i<=n;i++)
            c[i][1]=b[q][i];
        for(i=2;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(b[q][i]==a[j][1])
                {
                    s=j;
                    break;
                }
            }
            for(j=1;j<=m;j++)
                c[i][j]=a[s][j];
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
                cout<<c[i][j]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
