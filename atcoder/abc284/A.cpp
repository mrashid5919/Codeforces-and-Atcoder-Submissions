#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int n,i;
    string ara[20];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>ara[i];
    for(i=n-1;i>=0;i--)
        cout<<ara[i]<<"\n";
    return 0;
}
