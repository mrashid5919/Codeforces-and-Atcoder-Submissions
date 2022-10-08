#include<bits/stdc++.h>
#include<string>
#include<cmath>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,l,r,cnt,a,b,x,y;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>l>>r;
        a=sqrtl(l);
        b=sqrtl(r);
        if(a==b)
        {
            if((l-a*a)%a==0)
                x=(l-a*a)/a;
            else
                x=(l-a*a)/a+1;
            y=(r-a*a)/a;
            cnt=y-x+1;
        }
        else
        {
            if(b-a>1)
                cnt+=3*(b-a-1);
            if((l-a*a)%a==0)
                x=(l-a*a)/a;
            else
                x=(l-a*a)/a+1;
            cnt+=3-x;
            y=(r-b*b)/b;
            cnt+=y+1;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
