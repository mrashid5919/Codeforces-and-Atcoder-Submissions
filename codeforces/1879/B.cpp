#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[300005],b[300005];

int main()
{
    fastio;
    long long t,n,i,suma,sumb,mna,mnb;
    cin>>t;
    while(t--)
    {
        cin>>n;
        suma=0;
        sumb=0;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            suma+=ara[i];
            if(i==0)
                mna=ara[i];
            else
                mna=min(mna,ara[i]);
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
            sumb+=b[i];
            if(i==0)
                mnb=b[i];
            else
                mnb=min(mnb,b[i]);
        }
        cout<<min(n*mna+sumb,n*mnb+suma)<<"\n";
    }
    return 0;
}