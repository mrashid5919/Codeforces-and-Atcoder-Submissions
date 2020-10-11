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
        if(n==2)
        {
            cout<<"2"<<"\n";
            cout<<"1 2"<<"\n";
        }
        else
        {
            cout<<"2"<<"\n";
            cout<<n-2<<" "<<n<<"\n";
            cout<<n-1<<" "<<n-1<<"\n";
            for(i=n-3;i>=1;i--)
            {
                cout<<i<<" "<<i+2<<"\n";
            }
        }
    }
    return 0;
}
