#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int ara[30],i,cnt=0;
    string s;
    cin>>s;
    ara[0]=0;
    for(i=1;i<=26;i++)
    {
        ara[s[i-1]-'A'+1]=i;
    }
    for(i=2;i<=26;i++)
        cnt+=abs(ara[i]-ara[i-1]);
    cout<<cnt<<"\n";
    return 0;
}