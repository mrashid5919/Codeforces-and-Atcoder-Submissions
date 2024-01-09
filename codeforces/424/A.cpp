#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int n,i,sm=0,l=0,cnt=0;
    string s;
    cin>>n;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='x')
            sm++;
        else
            l++;
    }
    for(i=0;i<n;i++)
    {
        if(s[i]=='x' && sm>n/2)
        {
            s[i]='X';
            sm--;
            l++;
            cnt++;
        }
        else if(s[i]=='X' && l>n/2)
        {
            s[i]='x';
            l--;
            sm++;
            cnt++;
        }
    }
    cout<<cnt<<"\n"<<s<<"\n";
    return 0;
}