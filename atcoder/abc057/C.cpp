#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,i,mn=INT_MAX,x,y;
    cin>>n;
    for(i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            x=n/i;
            y=0;
            while(x!=0)
            {
                y++;
                x/=10;
            }
            mn=min(mn,y);
        }
    }
    cout<<mn<<"\n";
    return 0;
}
