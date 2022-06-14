#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,ara[200],dis;
    cin>>t;
    while(t--)
    {
        cin>>n;
        dis=1;
        for(i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n);
        for(i=1;i<n;i++)
        {
            if(ara[i]!=ara[i-1])
                dis++;
        }
        if(dis%2!=n%2)
            cout<<dis-1<<"\n";
        else
            cout<<dis<<"\n";
    }
    return 0;
}
