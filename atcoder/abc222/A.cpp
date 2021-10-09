#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int n,r=0;
    cin>>n;
    if(n==0)
    {
        cout<<"0000";
        return 0;
    }
    int m=n;
    while(m!=0)
    {
        r++;
        m/=10;
    }
    for(int i=0;i<4-r;i++)
        cout<<0;
    cout<<n;
    return 0;
}
