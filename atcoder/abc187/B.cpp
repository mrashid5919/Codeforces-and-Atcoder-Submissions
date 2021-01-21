#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,i,x[1006],y[1006],ans=0,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((y[j]-y[i])%(x[j]-x[i])==0 && (y[j]-y[i])/(x[j]-x[i])>=-1 && (y[j]-y[i])/(x[j]-x[i])<=1)
            {
                ans++;
            }
            else if((y[j]-y[i])/(x[j]-x[i])==0)
                ans++;
        }
    }
    cout<<ans<<"\n";
    return 0;
}
