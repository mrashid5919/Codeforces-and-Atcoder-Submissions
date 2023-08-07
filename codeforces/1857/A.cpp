#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,x,od;
    cin>>t;
    while(t--)
    {
        od=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>x;
            od+=x%2;
        }
        if(od%2==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}