#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int a,b,c;
    cin>>a>>b>>c;
    if(b*c>=a)
        cout<<"Yes"<<"\n";
    else
        cout<<"No"<<"\n";
    return 0;
}
