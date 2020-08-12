#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,r,g,b,w;
    cin>>t;
    while(t--)
    {
        cin>>r>>g>>b>>w;
        if(r%2==g%2 && g%2==b%2 && b%2==w%2)
            cout<<"Yes"<<endl;
        else if(r%2+g%2+b%2+w%2==1)
            cout<<"Yes"<<endl;
        else if(r>0 && b>0 && g>0 && r%2+g%2+b%2+w%2==3)
        {
            cout<<"Yes"<<endl;
        }
        else
            cout<<"No"<<endl;
    }
    return 0;
}
