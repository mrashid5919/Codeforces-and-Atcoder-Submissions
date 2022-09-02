#include<bits/stdc++.h>
#include<string>
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
        cout<<(n/6)*5+(n/3-n/6)*3+(n/2-n/6)*3+(n-(n/2+n/3-n/6))<<"\n";
    }
    return 0;
}
