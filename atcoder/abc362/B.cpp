#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long x1,y1,x2,y2,x3,y3,a,b,c;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    a=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
    b=(x3-x2)*(x3-x2)+(y3-y2)*(y3-y2);
    c=(x1-x3)*(x1-x3)+(y1-y3)*(y1-y3);
    if(a==b+c||b==a+c||c==a+b)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}