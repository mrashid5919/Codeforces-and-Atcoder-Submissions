#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,g,b,x,a,sum;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n>>g>>b;
        x=n/2+n%2;
        a=x/g;
        if(x%g==0)
            sum=a*g+(a-1)*b;
        else
            sum=a*g+x%g+a*b;
        if(sum<n)
            sum+=(n-sum);
        cout<<sum<<"\n";
    }
    return 0;
}
