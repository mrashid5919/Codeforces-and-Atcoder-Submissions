#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int t,n,i,cnt;
    string s;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>n;
        cin>>s;
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                if(s[i]=='@')
                    cnt++;
            }
            else
            {
                if(s[i]=='*' && s[i-1]=='*')
                    break;
                else if(s[i]=='@')
                    cnt++;
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}