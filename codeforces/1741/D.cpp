#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[300005];

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
    long long t,n,i,j,p,cnt;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n;
        cnt=0;
        for(i=0;i<n;i++)
            cin>>ara[i];
        for(i=1;i<n;i*=2)
        {
            for(j=0;j<n;j+=2*i)
            {
                if(abs(ara[j]-ara[j+i])!=i)
                {
                    p=1;
                    break;
                }
                if(ara[j]>ara[j+i])
                {
                    cnt++;
                    long long temp=ara[j+i];
                    for(long long k=0;k<2*i;k++)
                        ara[j+k]=temp+k;
                }
            }
        }
        if(p==1)
            cout<<-1<<"\n";
        else
            cout<<cnt<<"\n";
    }
    return 0;
}
