#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    int n,m,i,c,mn,j;
    string s,t;
    cin>>s;
    cin>>t;
    n=s.size();
    m=t.size();
    for(i=0;i<=n-m;i++)
    {
        c=0;
        for(j=0;j<m;j++)
        {
            if(s[i+j]!=t[j])
                c++;
        }
        if(i==0)
            mn=c;
        else
            mn=min(c,mn);
    }
    cout<<mn<<"\n";
    return 0;
}
