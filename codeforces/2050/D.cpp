#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,n,i,j;
    string s;
    char cur;
    cin>>t;
    while(t--)
    {
        cin>>s;
        n=s.size();
        for(i=1;i<n;i++)
        {
            cur=s[i];
            for(j=i-1;j>=0;j--)
            {
                if(cur<=s[j]+1)
                    break;
                s[j+1]=s[j];
                s[j]=(char)(cur-1);
                cur--;
                if(cur=='0')
                    break;
            }
        }
        cout<<s<<"\n";
    }
}