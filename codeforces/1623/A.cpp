#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,m,rb,cb,rd,cd,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>rb>>cb>>rd>>cd;
        if(rb<=rd)
            x=rd-rb;
        else
            x=2*n-rb-rd;
        if(cb<=cd)
            y=cd-cb;
        else
            y=2*m-cb-cd;
        cout<<min(x,y)<<"\n";
    }
    return 0;
}
