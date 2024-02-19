#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,n,i,a,b;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        a=0; b=0;
        for(i=0;i<5;i++)
        {
            if(s[i]=='A')
                a++;
            else
                b++;
        }
        if(a>b)
            cout<<"A\n";
        else 
            cout<<"B\n";
    }
    return 0;
}