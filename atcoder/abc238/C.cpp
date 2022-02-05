//Took help from editorial
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long M=998244353;

long long power(long long x,long long y)
{
    long long u=1;
    for(long long i=0;i<y;i++)
        u=u*x;
    return u;
}

int main()
{
    fastio;
    long long n,m,i,x,sum=0,num=0,temp;
    cin>>n;
    m=n;
    while(m!=0)
    {
        num++;
        m/=10;
    }
    for(i=1;i<num;i++)
    {
        x=9*power(10,i-1);
        temp=((x%M)*((x+1)%M))%M;
        temp=(temp*(M/2+1))%M;
        sum=((sum%M)+(temp%M))%M;
        //cout<<sum<<"\n";
    }
    x=n+1-power(10,num-1);
    temp=((x%M)*((x+1)%M))%M;
    temp=(temp*(M/2+1))%M;
    sum=((sum%M)+(temp%M))%M;
    cout<<sum<<"\n";
    return 0;
}
