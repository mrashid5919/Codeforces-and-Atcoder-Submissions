#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int t,n,k,cnt;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>n>>k;
        while(n>1)
        {
            cnt++;
            n-=(k-1);
        }
        cout<<cnt<<"\n";
    }
    return 0;
}