#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,j,mx,mxp,x,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        m=n;
        mx=0,mxp=0;
        x=0;
        if(n%2==0)
        {
            while(n%2==0)
            {
                x++;
                n/=2;
            }
        }
        if(x>mxp)
        {
            mxp=x;
            mx=2;
        }
        for(i=3;i*i<=n;i=i+2)
        {
            x=0;
            if(n%i==0)
            {
                while(n%i==0)
                {
                    x++;
                    n/=i;
                }
                if(x>mxp)
                {
                    mxp=x;
                    mx=i;
                }
            }
        }
        if(mxp==0)
        {
            cout<<1<<"\n";
            cout<<n<<"\n";
            continue;
        }
        cout<<mxp<<"\n";
        x=1;
        for(i=0;i<mxp-1;i++)
        {
            cout<<mx<<" ";
            x*=mx;
        }
        cout<<m/x<<"\n";
    }
    return 0;
}
