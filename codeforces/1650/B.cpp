#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,l,r,a;
    cin>>t;
    while(t--)
    {
        cin>>l>>r>>a;
        if(l==r)
        {
            cout<<l/a+l%a<<"\n";
            continue;
        }
        if(a==1)
            cout<<r/a+r%a<<"\n";
        else if(r<a)
            cout<<r/a+r%a<<"\n";
        else if(r%a==a-1)
            cout<<r/a+r%a<<"\n";
        else if(l/a==r/a)
            cout<<r/a+r%a<<"\n";
        else
            cout<<(r/a)-1+a-1<<"\n";
    }
    return 0;
}
