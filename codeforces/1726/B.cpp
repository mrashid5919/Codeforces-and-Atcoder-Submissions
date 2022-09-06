#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,m,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(m<n)
        {
            cout<<"NO"<<"\n";
            continue;
        }
        if(n%2==1)
        {
            cout<<"YES"<<"\n";
            for(i=0;i<n-1;i++)
                cout<<1<<" ";
            cout<<m-n+1<<"\n";
        }
        else
        {
            if((m-n+2)%2!=0)
            {
                cout<<"NO"<<"\n";
                continue;
            }
            cout<<"YES"<<"\n";
            for(i=0;i<n-2;i++)
                cout<<1<<" ";
            cout<<(m-n+2)/2<<" "<<(m-n+2)/2<<"\n";
        }
    }
    return 0;
}
