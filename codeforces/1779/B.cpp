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
        if(n%2==0)
        {
            cout<<"YES\n";
            for(i=0;i<n;i++)
            {
                if(i%2==0)
                    cout<<1<<" ";
                else
                    cout<<-1<<" ";
            }
            cout<<"\n";
        }
        else if(n!=3)
        {
            cout<<"YES\n";
            for(i=0;i<n;i++)
            {
                if(i%2==0)
                    cout<<n/2-1<<" ";
                else
                    cout<<(-1)*(n/2)<<" ";
            }
            cout<<"\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}
