#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int n,t;
    cin>>n>>t;
    if(n==1 && t==10)
        cout<<-1<<"\n";
    else
    {
        cout<<t;
        if(t<10)
        {
            for(int i=0;i<n-1;i++)
                cout<<0;
        }
        else
        {
            for(int i=0;i<n-2;i++)
                cout<<0;
        }
    }
    return 0;
}