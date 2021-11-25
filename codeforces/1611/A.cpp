#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,i,n,ev;
    string s;
    cin>>t;
    while(t--)
    {
        ev=0;
        cin>>s;
        n=s.size();
        for(i=0;i<n;i++)
        {
            if((s[i]-'0')%2==0)
                ev++;
        }
        if(ev==0)
            cout<<"-1"<<"\n";
        else if((s[n-1]-'0')%2==0)
            cout<<0<<"\n";
        else if((s[0]-'0')%2==0)
            cout<<1<<"\n";
        else
            cout<<2<<"\n";
    }
    return 0;
}
