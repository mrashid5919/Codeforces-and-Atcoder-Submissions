#include<bits/stdc++.h>
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
        for(i=1;i<=n;i++)
        {
            if(i==n)
                cout<<1<<" ";
            else
                cout<<i+1<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
