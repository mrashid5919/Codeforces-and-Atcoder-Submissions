#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,ara[200],sum,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n);
        sum=0;
        for(i=1;i<n;i++)
        {
            x=(ara[i]/(2*ara[0]-1));
            if(ara[i]%(2*ara[0]-1)==0)
                sum+=x-1;
            else
                sum+=x;
        }
        cout<<sum<<"\n";
    }
    return 0;
}
