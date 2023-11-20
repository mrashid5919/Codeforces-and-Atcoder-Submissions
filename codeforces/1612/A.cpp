#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a%2==0 && b%2==0)
        {
            cout<<a/2<<" "<<b/2<<"\n";
        }
        else if(a%2==1 && b%2==1)
        {
            if(a>=b)
            {
                cout<<(a+b)/2<<" "<<0<<"\n";
            }
            else
                cout<<0<<" "<<(a+b)/2<<"\n";
        }
        else
            cout<<-1<<" "<<-1<<"\n";
    }
    return 0;
}