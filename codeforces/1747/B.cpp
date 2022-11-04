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
        if(n==1)
        {
            cout<<1<<"\n";
            cout<<1<<" "<<3<<"\n";
        }
        else if(n==2)
        {
            cout<<1<<"\n";
            cout<<2<<" "<<6<<"\n";
        }

        else
        {
            cout<<n/2+n%2<<"\n";
            for(i=0;i<n/2;i++)
                cout<<(i*3)+2<<" "<<3*n-(i*3)<<"\n";
            if(n%2==1)
                cout<<(n/2)*3+2<<" "<<(n/2+1)*3<<"\n";
        }
    }
    return 0;
}
