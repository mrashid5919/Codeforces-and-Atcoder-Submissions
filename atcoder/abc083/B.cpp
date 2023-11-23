#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int n,a,b,sum=0,x,i,cur;
    cin>>n>>a>>b;
    for(i=1;i<=n;i++)
    {
        cur=0;
        x=i;
        while(x!=0)
        {
            cur+=x%10;
            x/=10;
        }
        if(cur>=a && cur<=b)
            sum+=i;
    }
    cout<<sum<<"\n";
    return 0;
}