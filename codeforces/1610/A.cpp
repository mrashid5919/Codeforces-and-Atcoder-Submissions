//Seen editorial
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,m,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(n==1 && m==1)
            cout<<0<<"\n";
        else if(n==1 || m==1)
            cout<<1<<"\n";
        else
            cout<<2<<"\n";
    }
    return 0;
}
