#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,s,x;
    cin>>t;
    while(t--)
    {
        cin>>s;
        x=sqrt(s);
        if(x*x==s)
            cout<<x<<"\n";
        else
            cout<<x+1<<"\n";
    }
    return 0;
}
