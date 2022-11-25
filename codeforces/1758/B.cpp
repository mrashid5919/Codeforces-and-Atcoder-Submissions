#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==1)
        {
            for(i=0;i<n;i++)
                cout<<1<<" ";
        }
        else
        {
            for(i=0;i<n-2;i++)
                cout<<2<<" ";
            cout<<1<<" "<<3;
        }
        cout<<"\n";
    }
    return 0;
}
