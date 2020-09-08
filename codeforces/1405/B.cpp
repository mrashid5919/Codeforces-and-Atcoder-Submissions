#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,sum=0,x;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>x;
            sum=max(0LL,sum+x);
        }
        cout<<sum<<"\n";
    }
    return 0;
}
