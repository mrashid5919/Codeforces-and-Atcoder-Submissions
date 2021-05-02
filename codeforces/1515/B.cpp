#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,p,x,y;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n;
        if(n%2==1)
        {
            cout<<"NO"<<"\n";
            continue;
        }
        x=sqrt(n);
        y=sqrt(n/2);
        if(x*x==n || y*y==n/2)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
    return 0;
}
