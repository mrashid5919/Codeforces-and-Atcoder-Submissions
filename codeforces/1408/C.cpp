#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,l,i,s,e,le,ri;
    static long long ara[100003];
    long double a,b,ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>l;
        for(i=0;i<n;i++)
            cin>>ara[i];
        s=-1;
        e=n;
        le=1;
        ri=1;
        a=0.0;
        b=(double)l;
        ans=0.0;
        while(a!=b)
        {
            if(e-s==1)
            {
                ans=ans+((b-a)/(le+ri));
                break;
            }
            if((ara[s+1]-a)/le==(b-ara[e-1])/ri)
            {
                ans=ans+(ara[s+1]-a)/le;
                le++;
                ri++;
                a=ara[s+1];
                b=ara[e-1];
                s++;
                e--;
            }
            else if((ara[s+1]-a)/le<(b-ara[e-1])/ri)
            {
                ans=ans+(ara[s+1]-a)/le;
                b=b-((ara[s+1]-a)/le)*ri;
                le++;
                a=ara[s+1];
                s++;
            }
            else if((ara[s+1]-a)/le>(b-ara[e-1])/ri)
            {
                ans=ans+(b-ara[e-1])/ri;
                a=a+((b-ara[e-1])/ri)*le;
                ri++;
                b=ara[e-1];
                e--;
            }
        }
        cout<<setprecision(15)<<ans<<"\n";
    }
    return 0;
}
