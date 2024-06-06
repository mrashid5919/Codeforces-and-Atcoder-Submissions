#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)


int main()
{
    fastio;
    long long t,x,y,i;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        for(i=0;;i++)
        {
            //cout<<(x&(1<<i))<<" "<<(y&(1<<i))<<"\n";
            if((x&(1<<i))!=(y&(1<<i)))
            {
                cout<<(1<<i)<<"\n";
                break;
            }
        }
    }
    return 0;
}