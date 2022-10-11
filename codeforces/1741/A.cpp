#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,m,i;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        n=a.size();
        m=b.size();
        if(a[n-1]=='S')
        {
            if(b[m-1]=='M' || b[m-1]=='L')
                cout<<"<"<<"\n";
            else if(n==m)
                cout<<"="<<"\n";
            else if(n<m)
                cout<<">"<<"\n";
            else
                cout<<"<"<<"\n";
        }
        else if(a[n-1]=='M')
        {
            if(b[m-1]=='S')
                cout<<">"<<"\n";
            else if(b[m-1]=='L')
                cout<<"<"<<"\n";
            else
                cout<<"="<<"\n";
        }
        else
        {
            if(b[m-1]=='S' || b[m-1]=='M')
                cout<<">"<<"\n";
            else if(n==m)
                cout<<"="<<"\n";
            else if(n<m)
                cout<<"<"<<"\n";
            else
                cout<<">"<<"\n";
        }
    }
    return 0;
}
