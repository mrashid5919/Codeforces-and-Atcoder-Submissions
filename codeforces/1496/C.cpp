#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,a,b,cx,cy;
    long double ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=0.0;
        static long long x[100005]={0},y[100005]={0};
        cx=0;
        cy=0;
        for(i=0;i<2*n;i++)
        {
            cin>>a>>b;
            if(a==0)
            {
                y[cy]=abs(b);
                cy++;
            }
            else
            {
                x[cx]=abs(a);
                cx++;
            }
        }
        sort(x,x+n);
        sort(y,y+n);
        for(i=0;i<n;i++)
        {
            ans+=sqrt(x[i]*x[i]+y[i]*y[i]);
        }
        cout<<setprecision(15)<<ans<<"\n";
    }
    return 0;
}
