#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,ara[200],p,z;
    cin>>t;
    while(t--)
    {
        cin>>n;
        p=0;
        z=0;
        for(i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n);
        for(i=0;i<n;i++)
        {
            if(ara[i]==0)
                z++;
            if(i>0 && ara[i]==ara[i-1])
                p=1;
        }
        if(z>0)
            cout<<n-z<<"\n";
        else if(p==1)
            cout<<n<<"\n";
        else
            cout<<n+1<<"\n";
    }
    return 0;
}
