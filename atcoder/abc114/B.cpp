#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    string s;
    int i,x,mn;
    cin>>s;
    int n=s.size();
    for(i=0;i<n-2;i++)
    {
        x=(s[i]-'0')*100+(s[i+1]-'0')*10+(s[i+2]-'0');
        if(i==0)
            mn=abs(x-753);
        else
            mn=min(mn,abs(x-753));
    }
    cout<<mn<<"\n";
    return 0;
}