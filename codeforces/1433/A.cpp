#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,c,ans,a;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>n;
        a=n%10;
        while(n>0)
        {
            c++;
            n=n/10;
        }
        ans=10*(a-1)+(c*(c+1))/2;
        cout<<ans<<"\n";
    }
    return 0;
}