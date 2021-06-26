#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==0)
        cout<<0<<"\n";
    else if(c*d-b<=0)
        cout<<-1<<"\n";
    else if(a%(c*d-b)==0)
        cout<<a/(c*d-b);
    else
        cout<<a/(c*d-b)+1;
}
