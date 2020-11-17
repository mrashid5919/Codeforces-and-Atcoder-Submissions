#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,c0,c1,h,zero,one,ans,i;
    string bin;
    cin>>t;
    while(t--)
    {
        zero=0;
        one=0;
        cin>>n>>c0>>c1>>h;
        cin>>bin;
        for(i=0;i<n;i++)
        {
            if(bin[i]=='0')
                zero++;
            else
                one++;
        }
        ans=min(c0*zero+c1*one,min(h*zero+c1*n,h*one+c0*n));
        cout<<ans<<"\n";
    }
    return 0;
}
