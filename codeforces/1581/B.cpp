//Incomplete
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
        if(m<n-1 || m>(n*(n-1))/2)
        {
            cout<<"NO"<<"\n";
            continue;
        }
        if(m==0)
            s=0;
        else if(m==(n*(n-1))/2)
            s=1;
        else
            s=2;
        if(s<k-1)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
    return 0;
}
