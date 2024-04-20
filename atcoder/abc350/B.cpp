#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int n,q,i,ara[1005],x;
    cin>>n>>q;
    for(i=0;i<n;i++)
    {
        ara[i]=1;
    }
    for(i=0;i<q;i++)
    {
        cin>>x;
        if(ara[x-1]==1)
        {
            ara[x-1]=0;
            n--;
        }
        else
        {
            ara[x-1]=1;
            n++;
        }
    }
    cout<<n<<"\n";
    return 0;
}