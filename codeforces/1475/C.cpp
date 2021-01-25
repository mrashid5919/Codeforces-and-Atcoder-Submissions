//Incomplete
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long bo[200005],g[200005],x[200005],y[200005];

int main()
{
    fastio;
    long long t,a,b,k,sum,i,j,p;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>a>>b>>k;
        for(i=0;i<k;i++)
        {
            cin>>x[i];
            bo[x[i]]++;
        }
        for(i=0;i<k;i++)
        {
            cin>>y[i];
            g[y[i]]++;
        }
        p=k;
        for(i=0;i<k;i++)
        {
            sum+=(p-bo[x[i]]-g[y[i]]+1);
            bo[x[i]]--;
            g[y[i]]--;
            p--;
        }
        cout<<sum<<"\n";
    }
    return 0;
}
