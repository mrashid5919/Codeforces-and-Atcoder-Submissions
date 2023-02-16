#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,a,b,k;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>k;
        cout<<(k/2+k%2)*a-(k/2)*b<<"\n";
    }
    return 0;
}
