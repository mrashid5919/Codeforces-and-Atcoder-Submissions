#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}

int main()
{
    fastio;
    int t,k;
    cin>>t;
    while(t--)
    {
        cin>>k;
        cout<<100/gcd(100,k)<<"\n";
    }
    return 0;
}
