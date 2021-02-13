#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,i,t[1005],a[1005],x,y,p,q;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>t[i]>>a[i];
        if(i==0)
        {
            x=t[i];
            y=a[i];
        }
        else
        {
            if(x%t[i]==0)
                p=x/t[i];
            else
                p=x/t[i]+1;
            if(y%a[i]==0)
                q=y/a[i];
            else
                q=y/a[i]+1;
            x=max(p,q)*t[i];
            y=max(p,q)*a[i];
        }
    }
    cout<<x+y<<"\n";
    return 0;
}
