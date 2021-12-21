#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,s;
    cin>>n>>s;
    if(n<=s/2)
    {
        cout<<"YES"<<"\n";
        for(long long i=0;i<n-1;i++)
            cout<<1<<" ";
        cout<<s-n+1<<"\n";
        cout<<n<<"\n";
    }
    else
        cout<<"NO\n";
    return 0;
}

