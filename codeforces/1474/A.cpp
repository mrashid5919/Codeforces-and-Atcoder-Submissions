#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i;
    char ch;
    string b;
    cin>>t;
    while(t--)
    {
        ch='1';
        cin>>n;
        cin>>b;
        cout<<ch;
        for(i=1;i<n;i++)
        {
            if(b[i]==b[i-1])
            {
                if(ch=='1')
                    ch='0';
                else
                    ch='1';
            }
            else if(b[i-1]=='0' && b[i]=='1' && ch=='0')
                ch='1';
            cout<<ch;
        }
        cout<<"\n";
    }
    return 0;
}
