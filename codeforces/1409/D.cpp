#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,x,m,tmp,p,idx;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        m=0;
        tmp=0;
        p=0;
        s=to_string(n);
        for(i=0;i<s.size();i++)
        {
            m+=s[i]-'0';
        }
        if(m<=x)
        {
            cout<<0<<"\n";
            continue;
        }
        for(i=s.size()-1;i>=0;i--)
        {
            if(m<=x)
                break;
            if(s[i]=='0')
                continue;
            m-=s[i]-'0';
            s[i]='0';
            tmp=i-1;
            while(tmp>=0)
            {
                if(s[tmp]=='9')
                {
                    m-=s[tmp]-'0';
                    s[tmp]='0';
                    tmp--;
                }
                else
                {
                    tmp++;
                    break;
                }
            }
            if(tmp==-1){
                s='1'+s;
                break;
            }
            else
            {
                s[tmp-1]=s[tmp-1]+1;
                m++;
                i=tmp;
            }
        }
        long long l=stoll(s,nullptr,10);
        cout<<l-n<<"\n";
    }
    return 0;
}
