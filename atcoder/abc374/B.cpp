#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005];

int main() {
	// your code goes here
	fastio;
    string s,t;
    int i,n,m,p=0,idx=0;
    cin>>s;
    cin>>t;
    n=s.size(); m=t.size();
    for(i=0;i<min(n,m);i++)
    {
        if(s[i]!=t[i])
        {
            p=1;
            idx=i+1;
            break;
        }
    }
    if(p==0)
    {
        if(n!=m)
            idx=min(n,m)+1;
    }
    cout<<idx<<"\n";
    return 0;
}
