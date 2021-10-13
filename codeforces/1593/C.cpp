#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[400005];

int main()
{
    fastio;
    long long t,n,k,i,sum,c;
    cin>>t;
    while(t--)
    {
        sum=0;
        c=0;
        cin>>n>>k;
        for(i=0;i<k;i++)
            cin>>ara[i];
        sort(ara,ara+k);
        for(i=k-1;i>=0;i--)
        {
            if(sum>=ara[i])
            {
                //c++;
                break;
            }
            sum+=n-ara[i];
            c++;
        }
        cout<<c<<"\n";
    }
    return 0;
}
