#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,n,i,satl,satr,mn,ans;
    string s;
    cin>>t;
    while(t--)
    {
        mn=1000000000;
        cin>>n;
        cin>>s;
        satl=0;
        satr=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='1')
                satr++;
        }
        if(satr>=n/2+n%2)
        {
            mn=n;
            ans=0;
        }
        for(i=1;i<=n;i++)
        {
            if(s[i-1]=='0')
            {
                satl++;
            }
            else
            {
                satr--;
            }
            if(satl>=i/2+i%2 && satr>=(n-i)/2+(n-i)%2)
            {
                if(abs(n-2*i)<mn)
                {
                    mn=abs(n-2*i);
                    ans=i;
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}