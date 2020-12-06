#include<bits/stdc++.h>
#include<cmath>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,k,i,x[105],y[105],p,m,j;
    cin>>t;
    while(t--)
    {
        m=0;
        cin>>n>>k;
        for(i=0;i<n;i++)
            cin>>x[i]>>y[i];
        for(i=0;i<n;i++)
        {
            p=0;
            for(j=0;j<n;j++)
            {
                if(j==i)
                    continue;
                if(abs(x[i]-x[j])+abs(y[i]-y[j])>k)
                {
                    p=1;
                    break;
                }
            }
            if(p==0)
            {
                cout<<1<<"\n";
                m=1;
                break;
            }
        }
        if(m==0)
            cout<<-1<<"\n";
    }
    return 0;
}
