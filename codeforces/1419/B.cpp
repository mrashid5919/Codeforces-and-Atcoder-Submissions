#include <bits/stdc++.h>
#include<string>
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
        long long u=a;
        for(long long i=1;i<b;i++)
        {
            u=u*a;
        }
        return u;
    }
}

int main()
{
    fastio;
    long long t,x,sum,i,count,p;
    static long long ara[50];
    ara[0]=1;
    for(i=1;i<=30;i++)
        ara[i]=ara[i-1]+power(2,i);
    cin>>t;
    while(t--)
    {
        sum=0;
        count=0;
        cin>>x;
        for(i=0;i<=30;i++)
        {
            p=ara[i]*(1+ara[i])/2;
            if(sum+p<=x)
            {
                sum=sum+p;
                count++;
            }
            else
                break;
        }
        cout<<count<<"\n";
    }
    return 0;
}
