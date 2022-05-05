#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,z,on,q;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        n=s.size();
        z=0;
        on=0;
        q=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='0')
                z++;
            else if(s[i]=='1')
                on++;
            else
                q++;
        }
        if(z==0 && on==0)
            cout<<n<<"\n";
        else if(on==0)
        {
            for(i=0;i<n;i++)
            {
                if(s[i]=='0')
                {
                    cout<<i+1<<"\n";
                    break;
                }
            }
        }
        else if(z==0)
        {
            for(i=n-1;i>=0;i--)
            {
                if(s[i]=='1')
                {
                    cout<<n-i<<"\n";
                    break;
                }
            }
        }
        else
        {
            int a,b;
            for(i=0;i<n;i++)
            {
                if(s[i]=='0')
                {
                    b=i;
                    break;
                }
            }
            for(i=n-1;i>=0;i--)
            {
                if(s[i]=='1')
                {
                    a=i;
                    break;
                }
            }
            cout<<b-a+1<<"\n";
        }
    }
    return 0;
}
