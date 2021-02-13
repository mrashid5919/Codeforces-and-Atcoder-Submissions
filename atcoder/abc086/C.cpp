#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,p=0,i,j,dif;
    static long long x[100005],y[100005],t[100005];
    x[0]=0;
    y[0]=0;
    t[0]=0;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>t[i]>>x[i]>>y[i];
    for(i=1;i<=n;i++)
    {
        dif=abs(x[i]-x[i-1])+abs(y[i]-y[i-1]);
        if(dif%2==(t[i]-t[i-1])%2 && t[i]-t[i-1]>=dif)
            p=0;
        else
        {
            p=1;
            break;
        }
    }
    if(p==1)
        cout<<"No"<<"\n";
    else
        cout<<"Yes"<<"\n";
    return 0;
}
