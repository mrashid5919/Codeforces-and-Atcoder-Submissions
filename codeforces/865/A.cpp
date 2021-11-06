#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int a;
    cin>>a;
    if(a==1)
    {
        cout<<1<<" "<<1<<"\n"<<1<<"\n";
    }
    else
    {
        cout<<2*(a-1)<<" "<<2<<"\n";
        cout<<1<<" "<<2<<"\n";
    }
    return 0;
}
