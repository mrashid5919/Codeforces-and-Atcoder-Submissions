#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(__gcd(a,b)==1)
        {
            cout<<1<<"\n";
            cout<<a<<" "<<b<<"\n";
        }
        else
        {
            cout<<2<<"\n";
            if(a-1>=0 && b-1>=0 && __gcd(a-1,b-1)==1)
                cout<<a-1<<" "<<b-1<<"\n";
            else if(a-1>=0 && __gcd(a-1,b)==1)
                cout<<a-1<<" "<<b<<"\n";
            else if(a-1>=0 && __gcd(a-1,b+1)==1)
                cout<<a-1<<" "<<b+1<<"\n";
            else if(b-1>=0 && __gcd(a,b-1)==1)
                cout<<a<<" "<<b-1<<"\n";
            else if(__gcd(a,b+1)==1)
                cout<<a<<" "<<b+1<<"\n";
            else if(b-1>=0 && __gcd(a+1,b-1)==1)
                cout<<a+1<<" "<<b-1<<"\n";
            else if(__gcd(a+1,b+1)==1)
                cout<<a+1<<" "<<b+1<<"\n";
            cout<<a<<" "<<b<<"\n";
        }
    }
    return 0;
}
