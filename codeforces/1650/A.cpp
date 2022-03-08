#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,p;
    string s;
    char ch;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>s;
        cin>>ch;
        n=s.size();
        for(i=0;i<n;i+=2)
        {
            if(s[i]==ch)
            {
                p=1;
                break;
            }
        }
        if(p==1)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
    return 0;
}
