#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        x=n*4;
        if(n%2==1)
            cout<<x<<" ";
        for(i=0;i<n/2;i++)
        {
            cout<<x-n+i<<" "<<x+n-i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
