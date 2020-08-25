#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
    fastio;
    int t,n,i;
    string s;
    char ara[54];
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        for(i=1;i<=n;i++)
        {
            ara[i]=s[2*i-2];
        }
        for(i=1;i<=n;i++)
            cout<<ara[i];
        cout<<"\n";
    }
    return 0;
}
