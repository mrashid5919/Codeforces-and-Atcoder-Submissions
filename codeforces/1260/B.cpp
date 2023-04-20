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
        if(max(a,b)>2*min(a,b))
            cout<<"NO\n";
        else if((a+b)%3==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
