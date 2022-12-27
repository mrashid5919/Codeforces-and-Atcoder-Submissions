#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,ara[200],mul;
    cin>>t;
    while(t--)
    {
        mul=1;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            mul*=ara[i];
        }
        cout<<(mul+n-1)*2022<<"\n";
    }
    return 0;
}
