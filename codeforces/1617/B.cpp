#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==0)
            cout<<n/2<<" "<<n/2-1<<" "<<1<<"\n";
        else if((n/2)%2==1)
            cout<<(n/2)-2<<" "<<(n/2)+2<<" "<<1<<"\n";
        else
            cout<<(n/2)-1<<" "<<(n/2)+1<<" "<<1<<"\n";
    }
    return 0;
}
