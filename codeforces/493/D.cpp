#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n;
    cin>>n;
    if(n%2==1)
        cout<<"black"<<"\n";
    else
    {
        cout<<"white"<<"\n";
        cout<<1<<" "<<2<<"\n";
    }
    return 0;
}
