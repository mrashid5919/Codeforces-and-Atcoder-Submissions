#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,og,rv,a,b;
    string x,y;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>x>>y;
        og=0;
        rv=0;
        for(i=0;i<n;i++)
        {
            if(x[i]!=y[i])
                og++;
            if(x[i]!=y[n-1-i])
                rv++;
        }
        if(og%2==1)
            a=2*og-1;
        else if(og==0)
            a=0;
        else
            a=2*og;
        if(rv%2==1)
            b=2*rv;
        else if(rv==0)
            b=2;
        else
            b=2*rv-1;
        cout<<min(a,b)<<"\n";
    }
    return 0;
}
