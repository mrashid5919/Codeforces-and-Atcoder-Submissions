#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,mn,mx,a,b,ara[500];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1;i<=n;i++)
            cin>>ara[i];
        mn=INT_MAX;
        mx=INT_MIN;
        for(i=1;i<=n;i++)
        {
            if(ara[i]<mn)
            {
                mn=ara[i];
                a=i;
            }
            if(ara[i]>mx)
            {
                mx=ara[i];
                b=i;
            }
        }
        cout<<min(max(a,b),min(max(n-a+1,n-b+1),min(a+n-b+1,b+n-a+1)))<<"\n";
    }
    return 0;
}
