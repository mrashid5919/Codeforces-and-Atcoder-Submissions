#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,a,b,c,dif;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        dif=max(a,b)-min(a,b);
        if(dif==0 || a>dif*2 || b>dif*2 || c>dif*2)
        {
            cout<<-1<<"\n";
            continue;
        }
        if(c==a)
        {
            cout<<b<<"\n";
            continue;
        }
        if(c==b)
        {
            cout<<a<<"\n";
            continue;
        }
        if(c-dif>0 && c-dif!=a && c-dif!=b)
        {
            cout<<c-dif<<"\n";
            continue;
        }
        if(c+dif<=dif*2 && c+dif!=a && c+dif!=b)
        {
            cout<<c+dif<<"\n";
            continue;
        }
        cout<<"-1"<<"\n";
    }
    return 0;
}
