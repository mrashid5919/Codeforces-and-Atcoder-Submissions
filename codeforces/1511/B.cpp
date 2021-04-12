#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long power(long long a,long long b)
{
    long long u=1;
    if(b==0)
        return 1;
    else
    {
        for(long long i=0;i<b;i++)
            u=u*a;
        return u;
    }
}

int main()
{
    fastio;
    long long t,a,b,c,x,y;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a==b && a==c)
        {
            x=power(10,a-1);
            y=power(10,b-1);
        }
        else if(a>=b)
        {
            y=power(10,b-1);
            x=power(10,a-1)+power(10,c-1);
        }
        else
        {
            x=power(10,a-1);
            y=power(10,b-1)+power(10,c-1);
        }
        cout<<x<<" "<<y<<"\n";
    }
    return 0;
}
