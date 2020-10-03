#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int n,i,a=0,g=0,c=0,t=0,u,ans=0,j;
    string str;
    cin>>n>>str;
    for(i=0;i<n;i++)
    {
        a=0;
        g=0;
        c=0;
        t=0;
        u=i;
        while(u<n)
        {
            if(str[u]=='A')
                a++;
            else if(str[u]=='G')
                g++;
            else if(str[u]=='C')
                c++;
            else
                t++;

            if(a==t && c==g)
                ans++;
            u++;
        }
    }
    cout<<ans<<"\n";
}
