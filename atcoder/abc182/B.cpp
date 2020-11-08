#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int n,i,ara[105],max=0,g=0,j,ans;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>ara[i];
    sort(ara,ara+n);
    for(i=2;i<=ara[n-1];i++)
    {
        g=0;
        for(j=0;j<n;j++)
        {
            if(ara[j]%i==0)
                g++;
        }
        if(g>max)
        {
            max=g;
            ans=i;
        }
    }
    cout<<ans;
    return 0;
}
