#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int t,n,i,e,p;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        e=0;
        p=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='.')
            {
                e++;
                if(i>1 && s[i-2]=='.' && s[i-1]=='.')
                    p=1;
            }
        }
        if(p==1)
            cout<<2<<"\n";
        else
            cout<<e<<"\n";
    }
    return 0;
}