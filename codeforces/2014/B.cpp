#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,n,k,ev,od;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(n<=k)
        {
            if(n%2==0)
            {
                ev=n/2+n%2;
                od=n/2;
            }
            else
            {
                ev=n/2;
                od=n/2+n%2;
            }
        }
        else
        {
            if(n%2==0)
            {
                ev=k/2+k%2;
                od=k/2;
            }
            else
            {
                ev=k/2;
                od=k/2+k%2;
            }
        }
        if(od%2==1)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
    return 0;
}