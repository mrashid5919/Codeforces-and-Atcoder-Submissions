#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,sum,k;
    cin>>t;
    while(t--)
    {
        sum=0;
        k=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            sum+=ara[i];
        }
        if(sum%n!=0)
        {
            cout<<-1<<"\n";
            continue;
        }
        for(i=0;i<n;i++)
        {
            if(ara[i]>sum/n)
                k++;
        }
        cout<<k<<"\n";
    }
    return 0;
}
