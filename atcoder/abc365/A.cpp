#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int n;
    cin>>n;
    if(n%4!=0)
        cout<<365<<"\n";
    else if(n%100!=0)
        cout<<366<<"\n";
    else if(n%400!=0)
        cout<<365<<"\n";
    else
        cout<<366<<"\n";
    return 0;
}