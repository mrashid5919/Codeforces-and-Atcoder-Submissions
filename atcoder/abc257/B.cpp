#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int n,k,i,ara[500],q,x;
    cin>>n>>k>>q;
    for(i=1;i<=k;i++)
        cin>>ara[i];
    while(q--)
    {
        cin>>x;
        if(x==k && ara[x]!=n)
            ara[x]++;
        else if(x!=k)
        {
            if(ara[x]<ara[x+1]-1)
                ara[x]++;
        }
    }
    for(i=1;i<=k;i++)
        cout<<ara[i]<<" ";
    cout<<"\n";
}
