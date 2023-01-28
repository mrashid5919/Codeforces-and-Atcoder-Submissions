#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int n,i,f=0,a=0;
    string s;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s;
        if(s[0]=='F')
            f++;
        else
            a++;
    }
    if(f>a)
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}
