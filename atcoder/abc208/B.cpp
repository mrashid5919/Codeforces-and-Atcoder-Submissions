#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long i,p,ara[20],sum=0,x;
    for(i=1;i<=12;i++)
    {
        if(i==1)
            ara[i]=1;
        else
            ara[i]=ara[i-1]*i;
    }
    cin>>p;
    for(i=12;i>=1;i--)
    {
        x=p/ara[i];
        sum+=x;
        p-=x*ara[i];
    }
    cout<<sum;
    return 0;
}
