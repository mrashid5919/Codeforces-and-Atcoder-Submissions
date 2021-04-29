#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,m,k,s;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        s=(m-1)+(n-1)*m;
        if(s==k)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
    return 0;
}
