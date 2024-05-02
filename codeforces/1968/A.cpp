#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int t,n,i,mx,ans;
    cin>>t;
    while(t--)
    {
        mx=0;
        cin>>n;
        for(i=1;i<n;i++){
            if(__gcd(i,n)+i>mx)
            {
                mx=__gcd(i,n)+i;
                ans=i;            
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}