#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    string s;
    int n,i,a=0,b=0,a_start,b_start;
    cin>>s;
    n=s.size();
    for(i=0; i<n-1; i++)
    {
        if(s[i]=='A' && s[i+1]=='B')
        {
            a++;
        }
        if(s[i]=='B' && s[i+1]=='A')
        {
            b++;
        }
    }
    if(a>1 && b>1)
        cout<<"YES"<<"\n";
    else if(a==0 || b==0)
        cout<<"NO"<<"\n";
    else if((a==1 && b>2) || (b==1 && a>2))
        cout<<"YES"<<"\n";
    else
    {
        if(a==1)
        {
            for(i=0;i<n-1;i++)
            {
                if(s[i]=='A' && s[i+1]=='B')
                {
                    a_start=i;
                    break;
                }
            }

        }
        if(b==1)
        {
            for(i=0;i<n-1;i++)
            {
               if(s[i]=='B' && s[i+1]=='A')
                {
                    b_start=i;
                    break;
                }
            }
        }
        if(a==1 && b==1)
        {
            if(a_start==b_start+1 || b_start==a_start+1)
                cout<<"NO\n";
            else
                cout<<"YES\n";
        }
        else if(a==1)
        {
            if(s[a_start-1]=='B' && s[a_start+2]=='A')
                cout<<"NO\n";
            else
                cout<<"YES\n";
        }
        else
        {
            if(s[b_start-1]=='A' && s[b_start+2]=='B')
                cout<<"NO\n";
            else
                cout<<"YES\n";
        }
    }
    return 0;
}
