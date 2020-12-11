#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,k,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(i=0;i<n;i++)
        {
            if(i%3==0)
                cout<<"a";
            else if(i%3==1)
                cout<<"b";
            else
                cout<<"c";
        }
        cout<<"\n";
    }
    return 0;
}
