#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,j,zero,one;
    char ara[203][203];
    cin>>t;
    while(t--)
    {
        zero=0;
        one=0;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
                cin>>ara[i][j];
        }
        if((ara[1][2]==ara[2][1]) && (ara[n-1][n]==ara[n][n-1]))
        {
            if(ara[1][2]==ara[n][n-1])
            {
                cout<<2<<"\n";
                cout<<n-1<<" "<<n<<"\n";
                cout<<n<<" "<<n-1<<"\n";
            }
            else
            {
                cout<<0<<"\n";
            }
            continue;
        }
        else if(ara[1][2]==ara[2][1])
        {
            cout<<1<<"\n";
            if(ara[1][2]==ara[n][n-1])
            {
                cout<<n<<" "<<n-1<<"\n";
            }
            else
                cout<<n-1<<" "<<n<<"\n";
            continue;
        }
        else if(ara[n-1][n]==ara[n][n-1])
        {
            cout<<1<<"\n";
            if(ara[1][2]==ara[n][n-1])
            {
                cout<<1<<" "<<2<<"\n";
            }
            else
                cout<<2<<" "<<1<<"\n";
            continue;
        }
        else
        {
            cout<<2<<"\n";
            if(ara[1][2]=='1')
                cout<<1<<" "<<2<<"\n";
            else
                cout<<2<<" "<<1<<"\n";
            if(ara[n-1][n]=='0')
                cout<<n-1<<" "<<n<<"\n";
            else
                cout<<n<<" "<<n-1<<"\n";
        }
    }
    return 0;
}
