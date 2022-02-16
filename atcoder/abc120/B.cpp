#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int ara[105],a,b,k,i,count=0;
    cin>>a>>b>>k;
    for(i=1;i<=min(a,b);i++)
    {
        if(a%i==0 && b%i==0)
        {
            count++;
            ara[count]=i;
        }
    }
    cout<<ara[count-k+1]<<"\n";
    return 0;
}
