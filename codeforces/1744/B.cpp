#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[100005];

int main()
{
    fastio;
    long long t,n,q,i,typ,x,ev,od,sum;
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        sum=0;
        od=0;
        ev=0;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            sum+=ara[i];
            if(ara[i]%2==0)
                ev++;
            else
                od++;
        }
        while(q--)
        {
            cin>>typ>>x;
            if(typ==0)
            {
                sum+=ev*x;
                if(x%2==1)
                {
                    od+=ev;
                    ev=0;
                }
            }
            else
            {
                sum+=od*x;
                if(x%2==1)
                {
                    ev+=od;
                    od=0;
                }
            }
            cout<<sum<<"\n";
        }
    }
    return 0;
}
