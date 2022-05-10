#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,j,ara[2000],c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        c=0;
        for(i=1;i<=n;i++)
            cin>>ara[i];
        for(i=1;i<=n;i++)
        {
            for(j=1;j<i;j++)
            {
                if(ara[j]>=ara[i])
                    c++;
            }
        }
        cout<<c<<"\n";
    }
    return 0;
}
