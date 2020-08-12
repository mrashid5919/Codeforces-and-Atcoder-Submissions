#include<bits/stdc++.h>
using namespace std;
#define io ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    io;
    int k,l,m,n,d,sum=0,i;
    static int ara[100003];
    cin>>k>>l>>m>>n>>d;
    for(i=1;i<=d;i++)
        ara[i]=0;
    for(i=1;i<=d;i++)
    {
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0)
            ara[i]=1;
    }
    for(i=1;i<=d;i++)
    {
        if(ara[i]==1)
            sum++;
    }
    cout<<sum<<endl;
    return 0;
}
