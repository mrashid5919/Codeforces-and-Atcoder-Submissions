#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,ara[105],mx=1,x=1;
    cin>>t;
    while(t--)
    {
        mx=1;
        x=1;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(i==0)
                continue;
            if(i==n-1)
            {
                if(ara[i]==ara[i-1])
                    x++;
                mx=max(x,mx);
                x=1;
            }
            else
            {
                if(ara[i]==ara[i-1])
                    x++;
                else
                {
                    mx=max(x,mx);
                    x=1;
                }
            }
        }
        cout<<mx<<"\n";
    }
    return 0;
}
