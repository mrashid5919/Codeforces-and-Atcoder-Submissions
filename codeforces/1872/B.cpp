#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int t,n,d,s,mn;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>d>>s;
            if(i==0)
                mn=d+(s-1)/2;
            else
                mn=min(mn,d+(s-1)/2);
        }
        cout<<mn<<"\n";
    }
    return 0;
}