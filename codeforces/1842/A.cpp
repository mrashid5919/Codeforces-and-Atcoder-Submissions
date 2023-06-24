#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,m,i,sm1,sm2,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        sm1=0;
        sm2=0;
        for(i=0;i<n;i++)
        {
            cin>>x;
            sm1+=x;
        }
        for(i=0;i<m;i++)
        {
            cin>>x;
            sm2+=x;
        }
        if(sm1>sm2)
            cout<<"Tsondu\n";
        else if(sm1<sm2)
            cout<<"Tenzing\n";
        else
            cout<<"Draw\n";
    }
    return 0;
}
