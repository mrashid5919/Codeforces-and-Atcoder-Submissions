#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,m,i,r[105],b[105],p,q,mx1,mx2;
    cin>>t;
    while(t--)
    {
        p=0;
        q=0;
        mx1=0;
        mx2=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>r[i];
            p+=r[i];
            mx1=max(mx1,p);
        }
        cin>>m;
        for(i=0;i<m;i++)
        {
            cin>>b[i];
            q+=b[i];
            mx2=max(mx2,q);
        }
        cout<<mx1+mx2<<"\n";
    }
    return 0;
}
