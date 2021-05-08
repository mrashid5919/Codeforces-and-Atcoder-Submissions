#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long a,b,i,sum;
    cin>>a>>b;
    if(a==b)
    {
        for(i=1;i<=a;i++)
            cout<<i<<" "<<(-1)*i<<" ";
    }
    else if(a>b)
    {
        for(i=1;i<=a;i++)
            cout<<i<<" ";
        sum=(a*(a+1))/2;
        for(i=1;i<b;i++)
        {
            cout<<(-1)*i<<" ";
            sum-=i;
        }
        cout<<(-1)*sum<<" ";
    }
    else
    {
        for(i=1;i<=b;i++)
            cout<<(-1)*i<<" ";
        sum=(b*(b+1))/2;
        for(i=1;i<a;i++)
        {
            cout<<i<<" ";
            sum-=i;
        }
        cout<<sum<<" ";
    }
    return 0;
}
