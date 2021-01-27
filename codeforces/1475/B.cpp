#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,j,p;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n;
        while(n>=0)
        {
            if(n%2020==0)
            {
                p=1;
                break;
            }
            n-=2021;
        }
        if(p==1)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
    return 0;
}
