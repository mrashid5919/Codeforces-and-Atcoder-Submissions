#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,i,ara[10003],count=0;
    cin>>n;
    for(i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            ara[count]=i;
            count++;
        }
    }
    for(i=0;i<count;i++)
        cout<<ara[i]<<"\n";
    for(i=count-1;i>=0;i--)
    {
        if(i==count-1 && ara[i]*ara[i]==n)
            continue;
        cout<<n/ara[i]<<"\n";
    }
    return 0;
}
