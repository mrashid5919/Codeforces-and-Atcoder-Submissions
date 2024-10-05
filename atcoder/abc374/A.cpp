#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005];

int main() {
	// your code goes here
	fastio;
    string s;
    cin>>s;
    int n=s.size();
    if(s[n-1]=='n' && s[n-2]=='a' && s[n-3]=='s')
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}
