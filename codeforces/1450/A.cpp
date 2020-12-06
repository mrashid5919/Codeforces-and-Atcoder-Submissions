#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,ara[30],j;
    string st;
    cin>>t;
    while(t--)
    {
        for(i=0;i<26;i++)
            ara[i]=0;
        cin>>n;
        cin>>st;
        for(i=0;i<n;i++)
        {
            ara[st[i]-'a']++;
        }
        for(i=0;i<26;i++)
        {
            for(j=0;j<ara[i];j++)
                cout<<(char)('a'+i);
        }
        cout<<"\n";
    }
    return 0;
}
