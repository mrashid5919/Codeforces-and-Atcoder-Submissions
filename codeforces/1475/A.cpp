#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        while(n%2==0)
            n/=2;
        if(n!=1)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
    return 0;
}
