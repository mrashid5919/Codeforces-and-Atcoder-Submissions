#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long power(long long x,long long y)
{
    if(y==0)
        return 1;
    else
    {
        long long d=1,i;
        for(i=0;i<y;i++)
            d=d*x;
        return d;
    }
}

int main()
{
    fastio;
    long long t,i,a,b,p,mn,j;
    cin>>t;
    while(t--)
    {
        mn=0;
        cin>>a>>b;
        for(i=b;;i++)
        {
            if(i==1)
                continue;
            if(mn>0)
                mn=p;
            for(j=1;;j++)
            {
                if(power(i,j)>a)
                {
                    p=j+i-b;
                    break;
                }
            }
            //cout<<p<<" ";
            if(mn==0)
            {
                mn=p;
            }
            else if(p>mn)
                break;
            //cout<<mn<<"\n";
        }
        cout<<mn<<"\n";
    }
    return 0;
}
