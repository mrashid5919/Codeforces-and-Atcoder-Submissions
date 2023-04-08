#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,m,x1,y1,x2,y2,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        cin>>x1>>y1>>x2>>y2;
        if((x1==1 && y1==1) || (x1==1 && y1==m) || (x1==n && y1==1) || (x1==n && y1==m))
            a=2;
        else if(x1==1 || x1==n || y1==1 || y1==m)
            a=3;
        else
            a=4;
        if((x2==1 && y2==1) || (x2==1 && y2==m) || (x2==n && y2==1) || (x2==n && y2==m))
            b=2;
        else if(x2==1 || x2==n || y2==1 || y2==m)
            b=3;
        else
            b=4;
        cout<<min(a,b)<<"\n";
    }
    return 0;
}
