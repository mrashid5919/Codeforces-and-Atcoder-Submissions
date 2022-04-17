#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,r,b,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>r>>b;
        for(i=1;i<=b+1;i++)
        {
            for(j=1;j<=r/(b+1);j++)
                cout<<'R';
            if(i<=r%(b+1))
                cout<<'R';
            if(i<=b)
                cout<<'B';
        }
        cout<<"\n";
    }
    return 0;
}
