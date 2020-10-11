#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==b+c+d || b==a+c+d || c==a+b+d || d==a+b+c)
        cout<<"Yes";
    else if(a+b==c+d || a+c==b+d || a+d==b+c)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
