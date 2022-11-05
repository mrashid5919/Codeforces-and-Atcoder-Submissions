#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    string s;
    int n,idx=-1;
    cin>>s;
    n=s.size();
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]=='a')
        {
            idx=i+1;
            break;
        }
    }
    cout<<idx;
    return 0;
}
