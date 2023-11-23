#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long n,x,i,in,mn,ans,dif;
    cin>>n>>x;
    in=((n-2)*180*n)/n;
    //cout<<in<<"\n";
    //in*=100000;
    in/=(n-2);
    for(i=1;i<=n-2;i++)
    {
        dif=abs(i*in-x*n);
        if(i==1)
        {
            mn=dif;
            ans=n;
        }
        else if(dif<mn)
        {
            mn=dif;
            ans=n-i+1;
        }
    }
    cout<<"1 2 "<<ans<<"\n";
    return 0;
}