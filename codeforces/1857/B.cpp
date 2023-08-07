#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,i,n,j;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        n=s.size();
        string ans;
        for(i=0;i<n;i++)
        {
            if(s[i]>='5' && s[i]<='9')
            {
                for(j=i;j<n;j++)
                    s[j]='0';
                if(i==0)
                {
                    s='1'+s;
                    break;
                }
                if(s[i-1]!='9')
                    s[i-1]++;
                if(s[i-1]>='5')
                {
                    while(s[i-1]>='5')
                    {
                        s[i-1]='0';
                        i--;
                        if(i==0)
                        {
                            s='1'+s;
                            break;
                        }
                        s[i-1]++;
                    }
                    //if(i>0)
                        //s[i-1]++;
                }
                break;
            }
        }
        /*for(i=n-1;i>=0;i--)
        {
            if(s[i]>='5' && s[i]<='9')
            {
                s[i]='0';
                if(i==0)
                    s='1'+s;
                else if(s[i-1]=='9')
                    continue;
                else
                    s[i-1]++;
            }
        }*/
        cout<<s<<"\n";
    }
    return 0;
}