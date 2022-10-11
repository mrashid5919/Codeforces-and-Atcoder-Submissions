#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1 || n==3)
        {
            cout<<-1<<"\n";
            continue;
        }
        if(n%2==0)
        {
            for(i=n;i>=1;i--)
                cout<<i<<" ";
        }
        else
        {
            for(i=n;i>n/2+1;i--)
                cout<<i<<" ";
            for(i=1;i<=n/2+1;i++)
                cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
