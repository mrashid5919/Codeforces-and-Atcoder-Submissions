#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,j;
    string s,tem;
    cin>>t;
    while(t--)
    {
        int ara[30]={0};
        cin>>s;
        n=s.size();
        cin>>tem;
        for(i=0;i<n;i++)
            ara[s[i]-'a']++;
        if(tem[0]=='a' && tem[1]=='b' && ara[0]>0 && ara[1]>0 && ara[2]>0)
        {
            for(i=0;i<ara[0];i++)
                cout<<'a';
            for(i=0;i<ara[2];i++)
                cout<<'c';
            for(i=0;i<ara[1];i++)
                cout<<'b';
            for(i=3;i<26;i++)
            {
                for(j=0;j<ara[i];j++)
                    cout<<(char)('a'+i);
            }
        }
        else
        {
            for(i=0;i<26;i++)
            {
                for(j=0;j<ara[i];j++)
                    cout<<(char)('a'+i);
            }
        }
        cout<<"\n";
    }
    return 0;
}
