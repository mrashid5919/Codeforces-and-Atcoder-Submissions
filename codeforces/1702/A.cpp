#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,m,i;
    cin>>t;
    while(t--)
    {
        cin>>m;
        for(i=1;;i*=10)
        {
            if(i>m)
            {
                cout<<m-(i/10)<<"\n";
                break;
            }
        }
    }
    return 0;
}
