#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,k,m,i,x;
    cin>>n>>k;
    if(k<n/2)
        cout<<-1<<"\n";
    else
    {
        if(n==1)
        {
            if(k==0)
                cout<<1<<"\n";
            else
                cout<<"-1";
            return 0;
        }
        m=n-n%2;
        x=k-(m-2)/2;
        for(i=1;i<=m-2;i++)
            cout<<i<<" ";
        cout<<((m-2)/x+1)*x<<" ";
        cout<<((m-2)/x+2)*x<<" ";
        if(n%2==1)
            cout<<((m-2)/x+2)*x+1<<" ";
    }
    return 0;
}
