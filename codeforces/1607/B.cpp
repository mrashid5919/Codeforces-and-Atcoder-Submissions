#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,x,n;
    cin>>t;
    while(t--)
    {
        cin>>x>>n;
        if(x%2==0)
        {
            if(n%4==0)
                cout<<x<<"\n";
            else if(n%4==1)
                cout<<x-n<<"\n";
            else if(n%2==0)
                cout<<x+1<<"\n";
            else
                cout<<x+n+1<<"\n";
        }
        else if(n%4==0)
            cout<<x<<"\n";
        else if(n%4==1)
            cout<<x+n<<"\n";
        else if(n%4==2)
            cout<<x-1<<"\n";
        else
            cout<<x-n-1<<"\n";
    }
    return 0;
}
