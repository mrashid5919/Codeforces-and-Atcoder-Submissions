#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long x1,y1,x2,y2;
    double ans;
    cin>>x1>>y1>>x2>>y2;
    if(y1+y2==0)
        ans=0;
    else
        ans=((double)x2*y1+x1*y2)/(y1+y2);
    cout<<setprecision(10)<<ans<<"\n";
    return 0;
}
