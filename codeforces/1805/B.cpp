#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,mn,id;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        if(n==1)
        {
            cout<<s<<"\n";
            continue;
        }
        for(i=1;i<n;i++)
        {
            if(i==1)
            {
                mn=s[i]-'a';
                id=i;
            }
            else if(s[i]-'a'<=mn)
            {
                mn=s[i]-'a';
                id=i;
            }
        }
        if(mn<=s[0]-'a')
        {
            cout<<(char)(mn+'a');
            for(i=0;i<n;i++)
            {
                if(i!=id)
                    cout<<s[i];
            }
            cout<<"\n";
        }
        else
            cout<<s<<"\n";
    }
    return 0;
}
