// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int n,i,a=0,t=0;
    string s;
    cin>>n;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='A')
            a++;
        else
            t++;
    }
    if(t>a)
        cout<<"T";
    else if(a>t)
        cout<<"A";
    else
    {
        if(s[n-1]=='A')
            cout<<"T";
        else
            cout<<"A";
    }
    return 0;
}