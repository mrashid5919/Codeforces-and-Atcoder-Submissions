#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t,n,k;
    cin>>t;
    while(t--)
{
    cin>>n>>k;
    if(n>k)
    {
        if(n%k==0)
            cout<<1<<"\n";
        else
            cout<<2<<"\n";
    }
    else if(k%n==0)
        cout<<k/n<<"\n";
    else
        cout<<k/n+1<<"\n";
}
    return 0;
}