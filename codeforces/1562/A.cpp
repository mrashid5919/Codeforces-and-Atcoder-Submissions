#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,l,r;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        if(l<=r/2+r%2)
            cout<<(r-1)/2<<"\n";
        else
            cout<<r-l<<"\n";
    }
    return 0;
}

