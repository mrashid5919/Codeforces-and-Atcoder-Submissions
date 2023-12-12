#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int n,k,i,ara[30],mn;
    string s;
    cin>>n>>k;
    cin>>s;
    for(i=0;i<k;i++)
        ara[i]=0;
    for(i=0;i<n;i++)
        ara[s[i]-'A']++;
    for(i=0;i<k;i++)
    {
        if(i==0)
            mn=ara[i];
        else
            mn=min(mn,ara[i]);
    }
    cout<<mn*k<<"\n";
    return 0;
}