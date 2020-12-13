#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,m,t,i,a[1005],b[1005],p=0,charge;
    cin>>n>>m>>t;
    charge=n;
    for(i=0;i<m;i++)
        cin>>a[i]>>b[i];
    for(i=0;i<m;i++)
    {
        if(i==0)
        {
            charge-=a[i];
        }
        else
            charge-=(a[i]-b[i-1]);
        if(charge<=0)
        {
            p=1;
            break;
        }
        charge=min(n,charge+(b[i]-a[i]));
        if(i==m-1)
        {
            charge-=(t-b[i]);
        }
        if(charge<=0)
        {
            p=1;
            break;
        }
    }
    if(p==0)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
