#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n<1400)
            cout<<"Division 4"<<"\n";
        else if(n<1600)
            cout<<"Division 3"<<"\n";
        else if(n<1900)
            cout<<"Division 2"<<"\n";
        else
            cout<<"Division 1"<<"\n";
    }
    return 0;
}
