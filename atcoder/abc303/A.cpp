#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int n,i,p=0;
    string x,y;
    cin>>n;
    cin>>x>>y;
    for(i=0;i<n;i++)
    {
        if(x[i]==y[i] || (x[i]=='1' && y[i]=='l') || (x[i]=='l' && y[i]=='1') || (x[i]=='0' && y[i]=='o') || (x[i]=='o' || y[i]=='0'))
            continue;
        p=1;
        break;
    }
    if(p==1)
        cout<<"No\n";
    else
        cout<<"Yes\n";
    return 0;
}
