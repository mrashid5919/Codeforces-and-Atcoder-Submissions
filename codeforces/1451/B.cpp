#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,q,i,l,r,p;
    string s;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n>>q;
        cin>>s;
        while(q--)
        {
            p=0;
            cin>>l>>r;
            for(i=l-2;i>=0;i--)
            {
                if(s[i]==s[l-1])
                {
                    p=1;
                    break;
                }
            }
            if(p==0)
            {
                for(i=r;i<n;i++)
                {
                    if(s[i]==s[r-1])
                    {
                        p=1;
                        break;
                    }
                }
            }
            if(p==1)
                cout<<"YES"<<"\n";
            else
                cout<<"NO"<<"\n";
        }
    }
    return 0;
}
