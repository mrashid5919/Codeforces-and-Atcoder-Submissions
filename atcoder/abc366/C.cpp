#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int ara[1000005];

int main()
{
    fastio;
    int q,x,op,dist=0;
    cin>>q;
    while(q--)
    {
        cin>>op;
        if(op==3)
            cout<<dist<<"\n";
        else if(op==1)
        {
            cin>>x;
            ara[x]++;
            if(ara[x]==1)
                dist++;
        }
        else
        {
            cin>>x;
            ara[x]--;
            if(ara[x]==0)
                dist--;
        }
    }
    return 0;
}