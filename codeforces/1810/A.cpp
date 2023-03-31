#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,x,i,p;
    cin>>t;
    while(t--)
    {
        cin>>n;
        p=0;
        for(i=1;i<=n;i++)
        {
            cin>>x;
            if(x<=i)
            {
                p=1;
            }
        }
        if(p==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
