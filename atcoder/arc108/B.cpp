#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    string str,t;
    int n,i,j,p=0,m;
    cin>>n;
    cin>>str;
    t="";
    for(i=0;i<n;i++)
    {
        t.append(str,i,1);
        m=t.size();
        if(m>=3)
        {
            if(t[m-1]=='x' && t[m-2]=='o' && t[m-3]=='f')
                t.erase(m-3,m);
        }
    }
    cout<<t.size()<<"\n";
    return 0;
}

