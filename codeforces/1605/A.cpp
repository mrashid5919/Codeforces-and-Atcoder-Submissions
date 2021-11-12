#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,a,b,c,sum;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        sum=a+b+c;
        if(sum%3==0)
            cout<<0<<"\n";
        else
            cout<<1<<"\n";
    }
    return 0;
}
