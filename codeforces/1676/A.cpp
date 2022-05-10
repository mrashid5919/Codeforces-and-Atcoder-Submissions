#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,i,a,b;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        a=0;
        b=0;
        for(i=0;i<3;i++)
            a+=(s[i]-'0');
        for(i=3;i<6;i++)
            b+=(s[i]-'0');
        if(a==b)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
