#include<bits/stdc++.h>
#include<cmath>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,a,b,c,ans1,ans2;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        ans1=abs(a-1);
        ans2=abs(b-c)+abs(c-1);
        if(ans1<ans2)
            cout<<1<<"\n";
        else if(ans2<ans1)
            cout<<2<<"\n";
        else
            cout<<3<<"\n";
    }
    return 0;
}
