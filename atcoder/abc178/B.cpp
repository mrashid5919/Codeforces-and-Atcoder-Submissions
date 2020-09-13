#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long a,b,c,d,ans;
    cin>>a>>b>>c>>d;
    if(a>=0 && b>=0 && c>=0 && d>=0)
        ans=b*d;
    else if(a<=0 && b<=0 && c<=0 && d<=0)
        ans=a*c;
    else
        ans=max(max(max(b*d,a*c),a*d),b*c);
    cout<<ans<<"\n";
    return 0;
}
