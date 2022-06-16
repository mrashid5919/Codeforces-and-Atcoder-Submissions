#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,a,b,i;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a>=b)
        {
            for(i=0;i<b;i++)
                cout<<"01";
            for(i=0;i<a-b;i++)
                cout<<"0";
        }
        else
        {
            for(i=0;i<a;i++)
                cout<<"10";
            for(i=0;i<b-a;i++)
                cout<<"1";
        }
        cout<<"\n";
    }
    return 0;
}
