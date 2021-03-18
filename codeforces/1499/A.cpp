#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,k1,k2,w,b,b1,b2,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n>>k1>>k2;
        cin>>w>>b;
        b1=n-k1;
        b2=n-k2;
        x=min(k1,k2)+(max(k1,k2)-min(k1,k2))/2;
        y=min(b1,b2)+(max(b1,b2)-min(b1,b2))/2;
        if(x>=w && y>=b)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
    return 0;
}
