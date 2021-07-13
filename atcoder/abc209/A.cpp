#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int a,b;
    cin>>a>>b;
    cout<<max(0,b-a+1)<<"\n";
    return 0;
}
