#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(j==i || j==i+1 || j==(i+1)%n)
                    cout<<1<<" ";
                else
                    cout<<0<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
