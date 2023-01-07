#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,a,b,i,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                x=n/i;
                if(n%(i*i)==0)
                {
                    a=i;
                    b=n/(i*i);
                    break;
                }
                y=sqrtl(x);
                if(y*y==x)
                {
                    a=y;
                    b=i;
                    break;
                }
            }
        }
        cout<<a<<" "<<b<<"\n";
    }
    return 0;
}
