#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long power(long long x,long long y)
{
    long long res=1;
    while(y>0)
    {
        res*=x;
        y--;
    }
    return res;
}

string xor_string(string a,string b)
{
    string res="";
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==b[i])
        {
            res+='0';
        }
        else
        {
            res+='1';
        }
    }
    return res;
}

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,j,sb;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        sb=0;
        n=s.size();
        for(i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                sb=n-i;
                break;
            }
        }
        if(sb==0)
        {
            cout<<1<<" "<<n<<" 1 1\n";
            continue;
        }
        string s1=s.substr(0,sb);
        string s2=s.substr(n-sb,n);
        string mx;
        long long idx=-1;
        for(i=0;i<=n-sb;i++)
        {
            if(i==0)
            {
                mx=xor_string(s1,s2);
                idx=1;
            }
            else
            {
                s1.erase(s1.begin());
                s1+=s[sb+i-1];
                if(xor_string(s1,s2)>mx)
                {
                    mx=xor_string(s1,s2);
                    idx=i+1;
                }
            }
        }
        cout<<1<<" "<<n<<" "<<idx<<" "<<idx+sb-1<<"\n";
    }
    return 0;
}