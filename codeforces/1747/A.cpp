#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[100005];

int main()
{
    fastio;
    long long t,n,i,sum,z;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=0;
        z=0;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            sum+=ara[i];
            if(ara[i]==0)
                z=1;
        }
        cout<<max(sum,(-1)*sum)<<"\n";
    }
    return 0;
}
