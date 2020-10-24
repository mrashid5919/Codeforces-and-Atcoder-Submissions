#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long power(long long a,long long b)
{
    if(b==0)
        return 1;
    else if(b==1)
        return a;
    else
    {
        long long u=1,k;
        for(k=0;k<b;k++)
            u=u*a;
        return u;
    }
}

int main()
{
    fastio;
    long long n,i,j,p=0;
    cin>>n;
    for(i=1;power(3,i)<=n;i++)
    {
        for(j=1;power(5,j)<=n;j++)
        {
            if(power(3,i)+power(5,j)==n)
            {
                cout<<i<<" "<<j<<"\n";
                p=1;
                break;
            }
        }
        if(p==1)
            break;
    }
    if(p==0)
        cout<<"-1"<<"\n";
    return 0;
}
