#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,a,b,c;
    string s;
    cin>>t;
    while(t--)
    {
        a=0;
        b=0;
        c=0;
        cin>>s;
        n=s.size();
        for(i=0;i<n;i++)
        {
            if(s[i]=='A')
                a++;
            else if(s[i]=='B')
                b++;
            else
                c++;
        }
        if(b==a+c)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
