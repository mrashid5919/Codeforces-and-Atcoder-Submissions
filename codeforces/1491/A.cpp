#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int n,q,i,c=0,t,k;
    static int ara[100005];
    cin>>n>>q;
    for(i=1;i<=n;i++)
    {
        cin>>ara[i];
        if(ara[i]==1)
            c++;
    }
    for(i=1;i<=q;i++)
    {
        cin>>t>>k;
        if(t==1)
        {
            ara[k]=1-ara[k];
            if(ara[k]==1)
                c++;
            else
                c--;
        }
        else if(k<=c)
        {
            cout<<1<<"\n";
        }
        else
            cout<<0<<"\n";
    }
    return 0;
}
