#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long double ara[200005];

int main()
{
    fastio;
    int m,i,a,b,c,j;
    long double p;
    map<long double,int> mp;
    string st;
    cin>>m;
    for(j=0;j<m;j++)
    {
        cin>>st;
        a=0;
        b=0;
        c=0;
        int n=st.size();
        int x,y;
        for(i=0;i<n;i++)
        {
            if(st[i]=='+')
            {
                x=i;
            }
            if(st[i]==')')
                y=i;
        }
        for(i=1;i<x;i++)
            a=(a*10)+(st[i]-'0');
        for(i=x+1;i<y;i++)
        {
            b=(b*10)+(st[i]-'0');
        }
        for(i=y+2;i<n;i++)
            c=(c*10)+(st[i]-'0');
        p=(long double)(a+b)/c;
        mp[p]++;
        ara[j]=p;
    }
    for(i=0;i<m;i++)
        cout<<mp[ara[i]]<<" ";
    return 0;
}
