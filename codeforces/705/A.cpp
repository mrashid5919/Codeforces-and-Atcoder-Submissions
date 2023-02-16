#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i==n)
        {
            if(i%2==0)
                cout<<"I love it";
            else
                cout<<"I hate it";
        }
        else if(i%2==0)
            cout<<"I love that ";
        else
            cout<<"I hate that ";
    }
    return 0;
}
