#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,m,k,h,x,cnt;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>n>>m>>k>>h;
        while(n--)
        {
            cin>>x;
            if(abs(h-x)%k==0 && abs(h-x)/k<m && h!=x)
                cnt++;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}