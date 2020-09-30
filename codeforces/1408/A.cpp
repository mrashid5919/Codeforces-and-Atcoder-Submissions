#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,a[103],b[103],c[103],p[103];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
            cin>>b[i];
        for(i=0;i<n;i++)
            cin>>c[i];
        for(i=0;i<n;i++)
        {
            if(i==0)
                p[i]=a[i];
            else if(i==n-1)
            {
                if(a[i]!=p[i-1] && a[i]!=p[0])
                    p[i]=a[i];
                else if(b[i]!=p[i-1] && b[i]!=p[0])
                    p[i]=b[i];
                else
                    p[i]=c[i];
            }
            else
            {
                if(a[i]!=p[i-1])
                    p[i]=a[i];
                else
                    p[i]=b[i];
            }
        }
        for(i=0;i<n;i++)
            cout<<p[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
