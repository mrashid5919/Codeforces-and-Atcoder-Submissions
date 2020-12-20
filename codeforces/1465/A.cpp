#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,c=0;
    string s;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>n;
        cin>>s;
        for(i=n-1;i>=0;i--)
        {
            if(s[i]==')')
                c++;
            else
                break;
        }
        if(c>n/2)
            cout<<"Yes"<<"\n";
        else
            cout<<"No"<<"\n";
    }
    return 0;
}
