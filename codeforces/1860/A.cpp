#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int t,n,i,p;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        n=s.size();
        p=0;
        for(i=0;i<n;i++)
        {
            if((i%2==0 && s[i]==')') || (i%2==1 && s[i]=='('))
            {
                p=1;
                break;
            }
        }
        if(p==0)
        {
            if(n==2)
            {
                cout<<"NO\n";
                continue;
            }
            cout<<"YES\n";
            for(i=0;i<2*n;i++)
            {
                if(i<n)
                    cout<<"(";
                else
                    cout<<")";
            }
            cout<<"\n";
        }
        else
        {
            p=0;
            for(i=0;i<n;i++)
            {
                if((i%2==0 && s[i]=='(') || (i%2==1 && s[i]==')'))
                {
                    p=1;
                    break;
                }
            }
            if(p==0)
            {
                cout<<"YES\n";
                for(i=0;i<2*n;i++)
                {
                    if(i<n)
                        cout<<"(";
                    else
                        cout<<")";
                }
                cout<<"\n";
                continue;
            }
            cout<<"YES\n";
            for(i=0;i<2*n;i++)
            {
                if(i%2)
                    cout<<")";
                else
                    cout<<"(";
            }
            cout<<"\n";
        }
    }
    return 0;
}