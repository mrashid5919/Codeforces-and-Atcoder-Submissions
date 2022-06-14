#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,ara[10],i,c;
    cin>>t;
    while(t--)
    {
        c=0;
        for(i=0;i<4;i++)
        {
            cin>>ara[i];
            if(i>0 && ara[i]>ara[0])
                c++;
        }
        cout<<c<<"\n";
    }
    return 0;
}
