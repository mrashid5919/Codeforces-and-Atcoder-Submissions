#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int m,d,a,b,c;
    cin>>m>>d;
    cin>>a>>b>>c;
    if(b==m && c==d)
        cout<<a+1<<" "<<1<<" "<<1<<"\n";
    else if(c==d)
        cout<<a<<" "<<b+1<<" "<<1<<"\n";
    else
        cout<<a<<" "<<b<<" "<<c+1<<"\n";
    return 0;
}