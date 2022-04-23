#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,p,a,b;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        a=0;
        b=0;
        n=s.size();
        p=0;
        if(s[0]=='B' || s[n-1]=='A')
            p=1;
        else
        {
            for(i=0;i<n;i++)
            {
                if(s[i]=='A')
                    a++;
                else if(b<a)
                    b++;
                else
                {
                    p=1;
                    break;
                }
            }
        }
        if(p==1)
            cout<<"NO"<<"\n";
        else
            cout<<"YES"<<"\n";
    }
    return 0;
}
