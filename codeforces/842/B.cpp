#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long r,d,n,i,x,y,rs,cnt=0;
    cin>>r>>d;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x>>y>>rs;
        if(x*x+y*y>=(r-d+rs)*(r-d+rs) && x*x+y*y<=(r-rs)*(r-rs)){
            cnt++;
            //cout<<i<<" ";
        }
    }
    cout<<cnt<<"\n";
    return 0;
}