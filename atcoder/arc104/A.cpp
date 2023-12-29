#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int a,b,x,y;
    cin>>a>>b;
    x=(a+b)/2;
    y=a-x;
    cout<<x<<" "<<y<<"\n";
    return 0;
}