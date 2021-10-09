#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,m,mn,mx,x,s;
    cin>>n>>m;
    if(m==0)
    {
        cout<<n<<" "<<n;
        return 0;
    }
    mn=max(0LL,n-2*m);
    s=sqrt(1+8*m);
    x=(1+s)/2;
    if((x*(x-1))/2==m)
        mx=n-x;
    else
        mx=n-x-1;
    cout<<mn<<" "<<mx;
    return 0;
}
