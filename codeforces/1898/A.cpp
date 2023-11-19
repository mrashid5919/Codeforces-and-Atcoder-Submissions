#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int t,n,k,i,a,b;
    string s;
    cin>>t;
    while(t--)
    {
        a=0;
        b=0;
        cin>>n>>k;
        cin>>s;
        for(i=0;i<n;i++)
        {
            if(s[i]=='A')
                a++;
            else
                b++;
        }
        if(b==k)
        {
            cout<<0<<"\n";
            continue;
        }
        if(b<k)
        {
            for(i=0;i<n;i++)
            {
                if(s[i]=='A')
                {
                    b++;
                    if(b==k)
                    {
                        cout<<1<<"\n";
                        cout<<i+1<<" "<<"B\n";
                        break;
                    }
                }
            }
        }
        else
        {
            for(i=0;i<n;i++)
            {
                if(s[i]=='B')
                {
                    b--;
                    if(b==k)
                    {
                        cout<<1<<"\n";
                        cout<<i+1<<" "<<"A\n";
                        break;
                    }
                }
            }
        }
    }
    return 0;
}