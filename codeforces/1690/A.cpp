#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%3==0)
            b=(n/3)+1;
        else
            b=(n/3)+2;
        n-=b;
        if(n==b-1)
        {
            a=b-2;
        }
        else
            a=b-1;
        c=n-a;
        cout<<a<<" "<<b<<" "<<c<<"\n";
    }
    return 0;
}
