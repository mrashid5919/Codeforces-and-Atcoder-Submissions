#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int t,n,i,a,b;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        a=n;
        b=-1;
        for(i=0;i<n;i++)
        {
            if(s[i]=='A')
            {
                a=i;
                break;
            }
        }
        for(i=n-1;i>=0;i--)
        {
            if(s[i]=='B')
            {
                b=i;
                break;
            }
        }
        if(a<b)
            cout<<b-a<<"\n";
        else
            cout<<0<<"\n";
    }
    return 0;
}