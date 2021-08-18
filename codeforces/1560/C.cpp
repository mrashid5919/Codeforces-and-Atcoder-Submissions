#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,k,x;
    cin>>t;
    while(t--)
    {
        cin>>k;
        x=sqrt(k);
        if(x*x==k)
        {
            cout<<x<<" "<<1<<"\n";
            continue;
        }
        if(k<(x*x)+(x+1))
        {
            cout<<k-x*x<<" "<<x+1<<"\n";
        }
        else
        {
            cout<<x+1<<" "<<(x+1)*(x+1)-k+1<<"\n";
        }
    }
    return 0;
}
