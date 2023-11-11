#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,x1,y1,x2,y2;
    cin>>t;
    while(t--)
    {
        cin>>x1>>y1>>x2>>y2;
        cout<<(x2-x1)*(y2-y1)+1<<"\n";
    }
    return 0;
}