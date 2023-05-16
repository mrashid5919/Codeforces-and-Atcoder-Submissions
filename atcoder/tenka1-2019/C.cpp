#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long x[200005],y[200005],mn;

int main()
{
    fastio;
    long long n,i,a=0,b=0;
    string s;
    cin>>n;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='#')
            a++;
        else
            b++;
    }
    if(a==0 || b==0)
        cout<<0<<"\n";
    else
    {
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                if(s[i]=='#')
                    x[i]=1;
                else
                    x[i]=0;
            }
            else if(s[i]=='#')
                x[i]=x[i-1]+1;
            else
                x[i]=x[i-1];
        }
        for(i=n-1;i>=0;i--)
        {
            if(i==n-1)
            {
                if(s[i]=='.')
                    y[i]=1;
                else
                    y[i]=0;
            }
            else if(s[i]=='.')
                y[i]=y[i+1]+1;
            else
                y[i]=y[i+1];
        }
        mn=min(a,b);
        for(i=0;i<n-1;i++)
        {
            mn=min(mn,x[i]+y[i+1]);
        }
        cout<<mn;
    }
    return 0;
}
