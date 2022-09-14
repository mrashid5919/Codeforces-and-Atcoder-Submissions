//Taken help
#include<bits/stdc++.h>
#include<cmath>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long x,y;
    for(int i=2;;i++)
    {
        cout<<"? 1 "<<i<<endl;
        cin>>x;
        cout<<"? "<<i<<" 1"<<endl;
        cin>>y;
        if(x==-1)
        {
            cout<<"! "<<i-1<<endl;
            break;
        }
        if(x!=y)
        {
            cout<<"! "<<x+y<<endl;
            break;
        }
    }
    return 0;

}
