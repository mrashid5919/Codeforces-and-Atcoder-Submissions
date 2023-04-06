#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(n%2==1 && k%2==0)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}
