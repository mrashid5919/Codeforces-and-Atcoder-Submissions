#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long power(long long x,long long y)
{
    if(y==0)
        return 1;
    else
    {
        long long u=1;
        for(long long i=1;i<=y;i++)
            u*=x;
        return u;
    }
}

int main()
{
    fastio;
    long long n,i,j,ara[100],ps[100],count;
    cin>>n;
    if(n<=3)
    {
        for(i=1;i<=n;i++)
        {
            if(i==n)
                cout<<i<<" ";
            else
                cout<<1<<" ";
        }
    }
    else
    {
        for(i=0;;i++)
        {
            if(power(2,i)>n)
            {
                count=i-2;
                break;
            }
            ara[i]=n/power(2,i);
        }
        ps[count]=ara[count];
        for(i=count-1;i>=0;i--)
        {
            ps[i]=ara[i]-ara[i+1];
        }
        /*for(i=0;i<=count;i++)
            cout<<ps[i]<<" ";*/
        for(i=0;i<=count;i++)
        {
            if(i==count)
            {
                for(j=0;j<ps[i]-1;j++)
                    cout<<power(2,i)<<" ";
                cout<<power(2,i)*ps[i]<<" ";
            }
            else
               for(j=0;j<ps[i];j++)
                    cout<<power(2,i)<<" ";
        }
    }
    return 0;
}
