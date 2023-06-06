#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,k,i,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        x=1;
        y=1;
        for(i=1;;i++)
        {
            if(x*2>n)
            {
                break;
            }
            x*=2;
        }
        if(i<=k)
        {
            for(long long j=1;j<=i;j++)
                y*=2;
            cout<<min(n+1,y)<<"\n";
        }
        else
        {
            for(long long j=1;j<=k;j++)
                y*=2;
            cout<<y<<"\n";
        }
    }
    return 0;
}
