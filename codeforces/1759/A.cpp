#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,p;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        p=0;
        n=s.size();
        for(i=0;i<n;i++)
        {
            if(s[i]!='Y' && s[i]!='e' && s[i]!='s')
            {
                p=1;
                break;
            }
            if(i!=0)
            {
                if((s[i]=='Y' && s[i-1]!='s') || (s[i]=='e' && s[i-1]!='Y') || (s[i]=='s' && s[i-1]!='e'))
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
