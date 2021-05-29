#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,p;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n;
        while(n>=0)
        {
            if(n%11==0)
            {
                p=1;
                break;
            }
            n-=111;
        }
        if(p==0)
            cout<<"NO"<<"\n";
        else
            cout<<"YES"<<"\n";
    }
    return 0;
}
