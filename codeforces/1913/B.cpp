#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int t,n,i,z,on,p;
    string s;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>s;
        n=s.size();
        z=0; on=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='0')
                z++;
            else
                on++;
        }
        for(i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                if(on==0)
                {
                    p=1;
                    cout<<n-i<<"\n";
                    break;
                }
                else
                    on--;
            }
            else if(z==0)
            {
                p=1;
                cout<<n-i<<"\n";
                break;
            }
            else
                z--;
        }
        if(p==0)
            cout<<0<<"\n";
    }
    return 0;
}