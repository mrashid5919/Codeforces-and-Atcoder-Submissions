#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i;
    string y;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>y;
        if(y[0]=='2' && y[1]=='0' && y[2]=='2' && y[3]=='0')
            cout<<"YES"<<"\n";
        else if(y[0]=='2' && y[1]=='0' && y[2]=='2' && y[n-1]=='0')
            cout<<"YES"<<"\n";
        else if(y[0]=='2' && y[1]=='0' && y[n-2]=='2' && y[n-1]=='0')
            cout<<"YES"<<"\n";
        else if(y[0]=='2' && y[n-3]=='0' && y[n-2]=='2' && y[n-1]=='0')
            cout<<"YES"<<"\n";
        else if(y[n-4]=='2' && y[n-3]=='0' && y[n-2]=='2' && y[n-1]=='0')
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
    return 0;
}
