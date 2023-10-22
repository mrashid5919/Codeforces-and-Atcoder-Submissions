#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,n,k,i,x,sm;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(i=n;;i++)
        {
            x=i;
            sm=0;
            while(x!=0)
            {
                sm+=x%10;
                x/=10;
            }
            if(sm%k==0)
            {
                cout<<i<<"\n";
                break;
            }
        }
    }
    return 0;
}