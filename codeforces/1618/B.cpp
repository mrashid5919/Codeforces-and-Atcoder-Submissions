#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,p;
    cin>>t;
    while(t--)
    {
        string s;
        p=0;
        cin>>n;
        cin.get();
        getline(cin,s);
        //cout<<s<<"\n";
        cout<<s[0];
        for(i=1;i<n-2;i++)
        {
            if(s[3*i]!=s[3*(i-1)+1])
            {
                p=1;
                cout<<s[3*(i-1)+1];
            }
            cout<<s[3*i];
        }
        cout<<s[3*(n-3)+1];
        if(p==0)
            cout<<"a";
        cout<<"\n";
    }
    return 0;
}
