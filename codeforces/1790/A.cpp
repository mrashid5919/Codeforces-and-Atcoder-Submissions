#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    string pi="314159265358979323846264338327";
    long long t,i,cnt=0;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        cnt=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]==pi[i])
                cnt++;
            else
                break;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
