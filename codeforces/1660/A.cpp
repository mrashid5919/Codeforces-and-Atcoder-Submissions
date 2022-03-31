#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a==0)
            cout<<1<<"\n";
        else
            cout<<a+2*b+1<<"\n";
    }
    return 0;
}
