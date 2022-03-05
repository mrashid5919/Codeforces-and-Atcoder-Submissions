#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

char s[200005];

int main()
{
    fastio;
    string p;
    cin>>p;
    for(int i=0;i<p.size();i++)
        s[i]=p[i];
    sort(s,s+p.size());
    for(int i=0;i<p.size();i++)
        cout<<s[i];
    return 0;
}
