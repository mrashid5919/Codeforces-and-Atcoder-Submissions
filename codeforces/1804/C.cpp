#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,x,i,p,dif,sm,flag;
    cin>>t;
    while(t--)
    {
        flag=0;
        sm=0;
        cin>>n>>x>>p;
        if(x==0)
            dif=0;
        else
            dif=n-x;
        for(i=1; i<=min(2*n,p); i++)
        {
            sm=(sm+i)%n;
            if(sm==dif)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
