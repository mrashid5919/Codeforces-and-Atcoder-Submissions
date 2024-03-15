#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==1)
        {
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
        for(i=0;i<n;i++)
            cout<<(char)('A'+i/2);
        cout<<"\n";
    }
    return 0;
}