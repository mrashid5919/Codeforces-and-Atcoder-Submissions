#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,sum,i,x,d,p;
    cin>>n;
    sum=n;
    for(i=1;i<=n;i++)
    {
        p=0;
        x=0;
        d=i;
        while(d>0)
        {
            if(d%10==7)
            {
                p=1;
                break;
            }
            d=d/10;
        }
        if(p==1)
        {
            sum--;
            continue;
        }
        d=i;
        while(d>0)
        {
            if(d%8==7)
            {
                p=1;
                break;
            }
            d=d/8;
        }
        if(p==1)
        {
            sum--;
        }
    }
    cout<<sum;
    return 0;
}
