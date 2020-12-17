#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if((a+b+c)%9!=0)
        {
            cout<<"NO"<<"\n";
            continue;
        }
        if(a<(a+b+c)/9 || b<(a+b+c)/9 || c<(a+b+c)/9)
        {
            cout<<"NO"<<"\n";
            continue;
        }
        cout<<"YES"<<"\n";
    }
    return 0;
}
