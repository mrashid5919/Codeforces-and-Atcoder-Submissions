#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long x,cur=100,cnt=0;
    cin>>x;
    while(true)
    {
        if(cur>=x)
            break;
        cur+=cur/100;
        cnt++;
    }
    cout<<cnt<<"\n";
    return 0;
}