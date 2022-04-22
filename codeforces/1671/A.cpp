#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,c,p;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        n=s.size();
        c=0;
        p=0;
        for(i=0;i<n;i++)
        {
            if(i==0)
                c++;
            else if(s[i]!=s[i-1])
            {
                if(c==1)
                {
                    p=1;
                    break;
                }
                c=1;
            }
            else
                c++;
            if(i==n-1 && c==1)
            {
                p=1;
                break;
            }
        }
        if(p==1)
            cout<<"NO"<<"\n";
        else
            cout<<"YES"<<"\n";
    }
    return 0;
}
