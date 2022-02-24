#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int ara[100005];

int main()
{
    fastio;
    int n,m,l,r,i;
    string s;
    cin>>s;
    n=s.size();
    for(i=0;i<n-1;i++)
    {
        if(i==0)
        {
            if(s[i]==s[i+1])
                ara[i]=1;
            else
                ara[i]=0;
        }
        else if(s[i]==s[i+1])
            ara[i]=ara[i-1]+1;
        else
            ara[i]=ara[i-1];
    }
    cin>>m;
    while(m--)
    {
        cin>>l>>r;
        int x;
        if(l>1)
            x=ara[l-1]-ara[l-2];
        else
            x=ara[l-1];
        cout<<ara[max(0,r-2)]-ara[l-1]+x<<"\n";
    }
    return 0;
}
