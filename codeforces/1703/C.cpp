#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int ara[200];

int main()
{
    fastio;
    int t,n,i,x;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        for(i=0;i<n;i++)
        {
            cin>>x>>s;
            int tmp=0;
            for(int j=0;j<x;j++)
            {
                if(s[j]=='U')
                    tmp--;
                else
                    tmp++;
            }
            if(ara[i]+tmp<0)
                cout<<ara[i]+tmp+10<<" ";
            else
                cout<<(ara[i]+tmp)%10<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
