#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int a,b,c,x;
    double f;
    cin>>a>>b>>c>>x;
    if(x<=a)
        cout<<1<<"\n";
    else if(x>b)
        cout<<0<<"\n";
    else
    {
        f=(double)c/(b-a);
        cout<<f<<"\n";
    }
    return 0;
}
