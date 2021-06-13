#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long a,b,c;
    cin>>a>>b>>c;
    if(c%2==0)
    {
        if(abs(a)>abs(b))
            cout<<">"<<"\n";
        else if(abs(a)==abs(b))
            cout<<"="<<"\n";
        else
            cout<<"<"<<"\n";
    }
    else
    {
        if(a==b)
            cout<<"="<<"\n";
        else if(a>=0 && b>=0)
        {
            if(a>b)
                cout<<">"<<"\n";
            else
                cout<<"<"<<"\n";
        }
        else if(a<=0 && b>=0)
            cout<<"<"<<"\n";
        else if(a>=0 && b<=0)
            cout<<">"<<"\n";
        else if(abs(a)<abs(b))
            cout<<">"<<"\n";
        else
            cout<<"<"<<"\n";
    }
    return 0;
}
