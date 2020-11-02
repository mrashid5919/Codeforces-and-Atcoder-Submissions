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
        for(i=n;i<2*n;i++)
            cout<<2*i<<" ";
        cout<<"\n";
    }
    return 0;
}
