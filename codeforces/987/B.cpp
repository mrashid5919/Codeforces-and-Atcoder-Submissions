#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long x,y;
    cin>>x>>y;
    if(x==y)
        cout<<"="<<"\n";
    else if(x==1)
        cout<<"<"<<"\n";
    else if(y==1)
        cout<<">"<<"\n";
    else if(min(x,y)==2 && max(x,y)==4)
        cout<<"="<<"\n";
    else if(min(x,y)==2 && max(x,y)==3)
    {
        if(x<y)
            cout<<"<"<<"\n";
        else
            cout<<">"<<"\n";
    }
    else if(x>y)
        cout<<"<"<<"\n";
    else
        cout<<">"<<"\n";
    return 0;
}
