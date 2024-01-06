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
        cin>>n;
        a=0;
        b=0;
        cin>>s;
        for(i=0;i<n;i++)
        {
            if(s[i]=='+')
                a++;
            else
                b++;
        }
        cout<<abs(a-b)<<"\n";
    }
    return 0;
}