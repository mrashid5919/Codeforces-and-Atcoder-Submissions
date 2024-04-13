#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,n,s,m,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        s=0;
        //s2=0;
        for(i=0;i<n;i++)
        {
            s+=(2*(n-i)-1)*(n-i);
        }
        // for(i=1;i<=n;i++)
        // {
        //     if(i==1)
        //         s2++;
        //     else if(i==n)
        //         s2+=(2*n-1)*i;
        //     else
        //         s2+=n*i;
        // }
        m=2*n;
        cout<<s<<" "<<m<<"\n";
        //cout<<s2<<"\n";
        for(i=0;i<n;i++)
        {
            cout<<1<<" "<<n-i<<" ";
            for(j=1;j<=n;j++)
                cout<<j<<" ";
            cout<<"\n";
            cout<<2<<" "<<n-i<<" ";
            for(j=1;j<=n;j++)
                cout<<j<<" ";
            cout<<"\n";
        }
    }
    return 0;
}