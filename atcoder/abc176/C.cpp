#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
    fastio;
    long long n,i,sum=0,mx=0;
    static long long ara[200003];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>ara[i];
    for(i=0;i<n;i++)
    {
        if(ara[i]>=mx)
            mx=ara[i];
        else
            sum=sum+mx-ara[i];
    }
    cout<<sum<<"\n";
    return 0;
}
