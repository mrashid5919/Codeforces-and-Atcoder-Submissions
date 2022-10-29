#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==0)
            cout<<2<<"\n";
        else
            cout<<3<<"\n";
    }
    return 0;
}

