#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,p,b,r;
    string s;
    cin>>t;
    while(t--)
    {
        p=0;
        b=0;
        r=0;
        cin>>n;
        cin>>s;
        for(i=0;i<n;i++)
        {
            if(s[i]=='W')
            {
                if((b>0 && r==0) || (r>0 && b==0))
                {
                    p=1;
                    break;
                }
                b=0;
                r=0;
            }
            else if(s[i]=='B')
                b++;
            else
                r++;
        }
        if(s[n-1]!='W')
        {
            if((b>0 && r==0) || (r>0 && b==0))
                p=1;
        }
        if(p==1)
            cout<<"NO"<<"\n";
        else
            cout<<"YES"<<"\n";
    }
    return 0;
}
