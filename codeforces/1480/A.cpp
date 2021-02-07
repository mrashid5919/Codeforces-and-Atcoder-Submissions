#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        n=s.size();
        for(i=0;i<n;i++)
        {
            if(i%2==0)
            {
                if(s[i]=='a')
                    s[i]='b';
                else
                    s[i]='a';
            }
            else if(s[i]=='z')
                s[i]='y';
            else
                s[i]='z';
        }
        cout<<s<<"\n";
    }
    return 0;
}
