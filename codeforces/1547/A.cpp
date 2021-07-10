#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,x1,y1,x2,y2,x3,y3;
    cin>>t;
    while(t--)
    {
        cin>>x1>>y1;
        cin>>x2>>y2;
        cin>>x3>>y3;
        if(x1==x2 && x2==x3 && y3>min(y1,y2) && y3<max(y1,y2))
            cout<<abs(x1-x2)+abs(y1-y2)+2<<"\n";
        else if(y1==y2 && y2==y3 && x3>min(x1,x2) && x3<max(x1,x2))
            cout<<abs(x1-x2)+abs(y1-y2)+2<<"\n";
        else
            cout<<abs(x1-x2)+abs(y1-y2)<<"\n";
    }
    return 0;
}
