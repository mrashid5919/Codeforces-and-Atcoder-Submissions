#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,p;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n;
        if(n==1)
        {
            cout<<0<<"\n";
            continue;
        }
        else if(n%2==0)
        {
            if(n==2)
                cout<<1<<"\n";
            else
                cout<<2<<"\n";
            continue;
        }
        else
        {
            if(n==3)
                cout<<2<<"\n";
            else
                cout<<3<<"\n";
        }
    }
    return 0;
}
