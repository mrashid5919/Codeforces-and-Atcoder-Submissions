#include<bits/stdc++.h>
#include<string>
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
        cout<<min((a+b)/4,min(a,b))<<"\n";
    }
    return 0;
}
