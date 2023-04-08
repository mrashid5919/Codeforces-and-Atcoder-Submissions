//Took help
#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,m,a,b,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        cout<<"? 1 1"<<endl;
        cin>>a;
        if(a+1>n)
        {
            cout<<"? 1 "<<a+1<<endl;
            cin>>b;
            cout<<"! "<<b+1<<" "<<a+1<<endl;
        }
        else if(a+1>m)
        {
            cout<<"? "<<a+1<<" 1"<<endl;
            cin>>b;
            cout<<"! "<<a+1<<" "<<b+1<<endl;
        }
        else
        {
            cout<<"? "<<a+1<<" "<<a+1<<endl;
            cin>>b;
            b=a-b;
            cout<<"? "<<a+1<<" "<<b+1<<endl;
            cin>>x;
            if(x==0)
                cout<<"! "<<a+1<<" "<<b+1<<endl;
            else
                cout<<"! "<<b+1<<" "<<a+1<<endl;
        }
    }
    return 0;
}
