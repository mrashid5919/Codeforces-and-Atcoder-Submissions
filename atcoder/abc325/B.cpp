#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long n,w[1005],x[1005],mx=0,sm,i,j;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>w[i]>>x[i];
    for(i=0;i<24;i++)
    {
        sm=0;
        for(j=0;j<n;j++)
        {
            if((x[j]+i)%24>=9 && (x[j]+i)%24<18)
                sm+=w[j];
        }
        mx=max(sm,mx);
    }
    cout<<mx<<"\n";
    return 0;
}