#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,a,b,c,d;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        if((c>=a && c<=b) || (a>=c && a<=d))
            cout<<max(a,c)<<"\n";
        else
            cout<<a+c<<"\n";
    }
    return 0;
}
