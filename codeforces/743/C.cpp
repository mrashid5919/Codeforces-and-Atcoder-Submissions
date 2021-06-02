#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int n;
    cin>>n;
    if(n==1)
        cout<<-1<<"\n";
    else
        cout<<n<<" "<<n+1<<" "<<n*(n+1)<<"\n";
    return 0;
}
