#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,x,y,k;
    cin>>t;
    while(t--)
    {
        long long it=0;
        cin>>x>>y>>k;
        while(k>0)
        {
            if(x==1)
            {
                x=(x+k)%(y-1);
                if(x==0)
                    x=y-1;
                break;
            }
            if(y-x%y<=k)
            {
                k-=(y-x%y);
                x+=y-x%y;
                while(x%y==0)
                    x/=y;
            }
            else
            {
                x+=k;
                k=0;
            }
            
        }
        // cout<<it<<"\n";
        cout<<x<<"\n";
    }
    return 0;
}