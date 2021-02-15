#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,k,d,v;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(n%2==0)
        {
            if(k%n==0)
                cout<<n<<"\n";
            else
                cout<<k%n<<"\n";
        }
        else
        {
            if(k<=n/2)
                cout<<k%n<<"\n";
            else
            {
                d=k-(n/2+1);
                v=(d/(n/2))+1;
                if((k+v)%n==0)
                    cout<<n<<"\n";
                else
                    cout<<(k+v)%n<<"\n";
            }
        }
    }
    return 0;
}
