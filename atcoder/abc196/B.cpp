#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    string x;
    int i,n;
    cin>>x;
    n=x.size();
    for(i=0;i<n;i++)
    {
        if(x[i]=='.')
            break;
        cout<<x[i]-'0';
    }
    return 0;
}