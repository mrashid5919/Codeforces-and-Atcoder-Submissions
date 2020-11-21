#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long s,p,f=0,b,inc;
    cin>>s>>p;
    b=s-1;
    if(s%2==1)
    {
        inc=2*(b/2-1);
        while(inc>=0)
        {
            if(b>p)
                break;
            if(b==p)
            {
                f=1;
                break;
            }
            b+=inc;
            inc=inc-2;
        }
    }
    else
    {
        inc=b;
        while(inc>=1)
        {
            if(b>p)
                break;
            if(b==p)
            {
                f=1;
                break;
            }
            inc=inc-2;
            b+=inc;
        }
    }
    if(f==1)
        cout<<"Yes"<<"\n";
    else
        cout<<"No"<<"\n";
    return 0;
}
