#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,a,b,c,d;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b>>c>>d;
        if(n*(a-b)>c+d || n*(a+b)<c-d)
            cout<<"No\n";
        else
            cout<<"Yes\n";
    }
    return 0;
}
