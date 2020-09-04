#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,a,b,ans;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a>=b)
        {
            if((a-b)%10==0)
                ans=(a-b)/10;
            else
                ans=(a-b)/10+1;
        }
        else
        {
            if((b-a)%10==0)
                ans=(b-a)/10;
            else
                ans=(b-a)/10+1;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
