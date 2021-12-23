#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long power(long long x,long long y)
{
    long long u=1;
    for(long long i=0;i<y;i++)
        u*=x;
    return u;
}

int main()
{
    fastio;
    long long x,mx=1,i,j,temp;
    cin>>x;
    for(i=2;i*i<=x;i++)
    {
        temp=i*i;
        for(j=3;;j++)
        {
            if(power(i,j)>x)
                break;
            temp=power(i,j);
        }
        mx=max(mx,temp);
    }
    cout<<mx;
    return 0;
}
