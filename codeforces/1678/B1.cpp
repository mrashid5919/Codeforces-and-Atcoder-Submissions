#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,sum,x,c;
    string s;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n;
        cin>>s;
        x=1;
        c=0;
        for(i=1;i<n;i++)
        {
            if(s[i]!=s[i-1])
            {
                ara[c]=x;
                c++;
                x=1;
            }
            else
                x++;
        }
        for(i=0;i<c;i++)
        {
            if(ara[i]%2==1)
            {
                sum++;
                ara[i+1]--;
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}
