#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,c,i,ara[200],x,cost;
    cin>>t;
    while(t--)
    {
        cin>>n>>c;
        cost=0;
        for(i=0;i<=100;i++)
            ara[i]=0;
        for(i=0;i<n;i++)
        {
            cin>>x;
            ara[x]++;
        }
        for(i=1;i<=100;i++)
        {
            if(ara[i]>c)
                cost+=c;
            else
                cost+=ara[i];
        }
        cout<<cost<<"\n";
    }
    return 0;
}
