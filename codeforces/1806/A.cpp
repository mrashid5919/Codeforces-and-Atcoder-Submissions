#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,a,b,c,d,ans,x;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        if(d<b)
        {
            cout<<-1<<"\n";
            continue;
        }
        x=a+(d-b);
        if(c>x)
            cout<<-1<<"\n";
        else
            cout<<(d-b)+(x-c)<<"\n";
    }
    return 0;
}
