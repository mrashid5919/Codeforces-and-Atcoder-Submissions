#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[100005];

int main()
{
    fastio;
    long long n,i;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>ara[i];
    if(n==1)
    {
        cout<<1<<" "<<1<<"\n";
        cout<<0<<"\n";
        cout<<1<<" "<<1<<"\n";
        cout<<0<<"\n";
        cout<<1<<" "<<1<<"\n";
        cout<<(-1)*ara[0]<<"\n";
        return 0;
    }
    cout<<1<<" "<<n-1<<"\n";
    for(i=0;i<n-1;i++)
    {
        if(ara[i]%n!=0)
        {
            cout<<(ara[i]%(n))*(n-1)<<" ";
            ara[i]+=(ara[i]%(n))*(n-1);
        }
        else
            cout<<0<<" ";
    }
    cout<<"\n";
    cout<<n<<" "<<n<<"\n";
    if(ara[n-1]%n!=0)
    {
        cout<<(ara[n-1]%(n))*(n-1)<<"\n";
        ara[n-1]+=(ara[n-1]%(n))*(n-1);
    }
    else
        cout<<0<<"\n";
    cout<<1<<" "<<n<<"\n";
    for(i=0;i<n;i++)
        cout<<(-1)*ara[i]<<" ";
    cout<<"\n";
    return 0;
}