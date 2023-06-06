#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,p;
    string s;
    char cur;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        p=0;
        for(i=0;i<n;i++)
        {
            if(p==0)
            {
                cout<<s[i];
                p=1;
                cur=s[i];
            }
            else if(s[i]==cur)
            {
                p=0;
            }
        }
        cout<<"\n";
    }
    return 0;
}
