#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,m,a,b,c,i,f;
    cin>>t;
    while(t--)
    {
        int v[100005]={0};
        cin>>n>>m;
        for(i=0;i<m;i++)
        {
            cin>>a>>b>>c;
            v[b]++;
        }
        for(i=1;i<=n;i++)
        {
            if(v[i]==0)
            {
                f=i;
                break;
            }
        }
        for(i=1;i<=n;i++)
        {
            if(i==f)
                continue;
            cout<<f<<" "<<i<<"\n";
        }
    }
    return 0;
}
