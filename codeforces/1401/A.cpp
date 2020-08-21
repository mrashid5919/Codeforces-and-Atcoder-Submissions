#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(n>=k)
        {
            if(n%2==0)
            {
                if(k%2==0)
                    cout<<0<<"\n";
                else
                    cout<<1<<"\n";
            }
            else
            {
                if(k%2==0)
                    cout<<1<<"\n";
                else
                    cout<<0<<"\n";
            }
        }
        else
        {
            cout<<k-n<<"\n";
        }
    }
    return 0;
}
