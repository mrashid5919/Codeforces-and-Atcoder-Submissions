#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long a,b,i,j,sum=0;
    cin>>a>>b;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=b;j++)
        {
            sum+=(i*100)+j;
        }
    }
    cout<<sum<<"\n";
    return 0;
}