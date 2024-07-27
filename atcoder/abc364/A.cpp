#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int n,i,p=0;
    string ara[105];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        if(i>0 && i<n-1 && ara[i]=="sweet" && ara[i-1]=="sweet")
        {
            p=1;
        }
    }
    if(p==1)
        cout<<"No\n";
    else
        cout<<"Yes\n";
    return 0;
}