#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,l,v,low,high,count,s;
    cin>>t;
    while(t--)
    {
        cin>>l>>v>>low>>high;
        s=(high/v)-(low/v);
        if(low%v==0 || high%v==0)
        {
            s++;
            if(low%v!=0)
                s--;
        }
        count=(l/v)-s;
        cout<<count<<"\n";
    }
    return 0;
}
