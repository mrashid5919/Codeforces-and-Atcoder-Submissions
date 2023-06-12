#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n<5)
            cout<<"Bob\n";
        else
            cout<<"Alice\n";
    }
    return 0;
}
